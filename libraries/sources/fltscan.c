/*
 *	_doscan - implement scanf, fscanf, sscanf
 */

#include	<stdio.h>
#include 	<ctype.h>
#include	<stdlib.h>
#include	<stdarg.h>
#include	<conio.h>
#include	<string.h>
#include	<hitech.h>

#if	defined(i8051) && defined(SMALL_MODEL)
#define	STATIC	static idata
#define	EXTERN	extern idata
#else
#define	STATIC	static
#define	EXTERN	extern
#endif

STATIC char *	ptr;
EXTERN char	_scanf_buf_[];
STATIC char *	bufp;
STATIC char	flag;

static void
ungetchl(char ch)
{
	if(ptr)
		*--ptr = ch;
	if(!flag)
		bufp = ptr;
}

static int
getchl()
{	int	c;

	if(flag)
		if(ptr && *ptr)
			return *ptr++ & 0xFF;
		else
			return EOF;
	if(!ptr || *ptr == 0) {
		cgets(_scanf_buf_);
		strcat(_scanf_buf_, "\n");
		ptr = _scanf_buf_;
	}
	c = *ptr++ & 0xFF;
	bufp = ptr;
	return c;
}

static uchar
range(int c, uchar base)
{
	if(isdigit(c))
		c -= '0';
	else
		{
		if (isupper(c))
			c = tolower(c) ;
		if (isalpha(c))
			c = c - 'a' + 10 ;
		else
			return 255;
		}
	if (c >= base)
		return 255;
	return c ;
}

static
wspace()
{
	int	c;

	while(isspace(c = getchl()))
		continue;
	if(c != EOF)
		ungetchl(c);
}

_doscan(char * str, char * fmt, va_list ap)
{
	uchar	c, sign, base, n, noass,len;
	char	width ;
	char *	sptr;
	int	ch;
	long	val;
	char	xbuf[60];

	if(str) {
		flag = 1;
		ptr = str;
	} else {
		flag = 0;
		ptr = bufp;
	}
	n = 0;
	while(c = *fmt++) {

		len = sizeof(int);
		if(isspace(c)) {
			wspace();
			continue;
		}
		if(c == '%') {
			noass = 0;
			width = 0;
loop:
			switch(c = *fmt++) {

			case '\0':
				return n;

			case '*':
				noass++;
				goto loop;

			case 'E':
			case 'G':
			case 'e':
			case 'g':
			case 'f':
				wspace();
				sptr = xbuf;
				if(width == 0)
					width = sizeof xbuf - 1;
				sign = 0;	/* really decimal point seen */
				ch = getchl();
				if(ch == '-') {
					*sptr++ = ch;
					ch = getchl();
					width--;
				}
				while(width && isdigit(ch) || !sign && ch == '.') {
					*sptr++ = ch;
					if(ch == '.')
						sign++;
					ch = getchl();
					width--;
				}
				if(width && (ch == 'e' || ch == 'E')) {
					*sptr++ = ch;
					ch = getchl();
					width--;
					if(width && (ch == '-' || ch == '+')) {
						*sptr++ = ch;
						ch = getchl();
						width--;
					}
					while(width && isdigit(ch)) {
						*sptr++ = ch;
						ch = getchl();
						width--;
					}
				}
				*sptr = 0;
				if(ch != EOF)
					ungetchl(ch);
				if(sptr == xbuf)
					return n;
				if(!noass) {
					n++;
					if(len == sizeof(long))
						*va_arg(ap, double *) = atof(xbuf);
					else
						*va_arg(ap, float *) = atof(xbuf);
				}
				continue;

			case 'l':
			case 'L':
				len = sizeof(long);
				goto loop;

			case 'h':
				len = sizeof(short);
				goto loop;

			case 'u':
			case 'd':
				base = 10;
				break;

			case 'o':
				base = 8;
				break;

			case 'X':
			case 'x':
				base = 16;
				break ;

			case 's':
				wspace();
				if ( !noass )
					sptr = va_arg(ap, char *);
				if ((ch = getchl()) == EOF )
					return n ? n : EOF;
				while(ch && ch != EOF && !isspace(ch)) {
					if(ch == *fmt) {
						fmt++;
						break;
					}
					if ( !noass ) 
						*sptr++ = ch;
					if(--width == 0)
						break;
					ch = getchl();
				}
				if(!noass) {
					n++;
					*sptr = 0;
				}
				continue;

			case 'c':
				if ( !noass ) {
					n++;
					sptr = va_arg(ap, char *);
				}
				do {
					if ((ch = getchl()) == EOF) 
						return n ? n : EOF;
					if ( !noass )
						*sptr++ = ch;
				} while(width && --width > 0);
				continue;
			default:
				if(isdigit(c)) {
					width = atoi(fmt-1);
					while(isdigit(*fmt))
						fmt++;
					goto loop;
				}
				if(c != (ch = getchl()))
					if(ch == EOF)
						return n ? n : EOF;
					else {
						ungetchl(ch);
						return n;
					}
				continue;
			}
			wspace();
			val = 0;
			sign = 0;
			ch = getchl();
			if(ch == '-') {
				sign++;
				ch = getchl();
			}
			if(range(ch, base) == 255) {
				if(ch != EOF)
					ungetchl(ch);
				return n;
			}
			do {
				val = val * base + range(ch, base);
			} while (( --width != 0 ) && ( range(ch = getchl(),base) != 255 )) ;
			if (ch != EOF && range(ch,base) == 255)
				ungetchl(ch);
			if(sign)
				val = -val;
			if ( !noass ) {
				n++;
				if(len == sizeof(long))
					*va_arg(ap, long *) = val;
				else if(len == sizeof(short))
					*va_arg(ap, short *) = val;
				else
					*va_arg(ap, int *) = val;
			}
			continue;
		} else if(c != (ch = getchl())) {
			if(ch != EOF) {
				ungetchl(ch);
				return n;
			} else
				return n ? n : EOF;
		}
	}
	return n;
}
