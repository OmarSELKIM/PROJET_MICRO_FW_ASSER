/*
 * 	These macros allow renaming of labels to allow multiple
 * 	object files to be created from single sources, with differently
 * 	named global labels. This is used to generate versions of the
 * 	intrinsic functions to be called from interrupt routines as
 * 	well as from main line code without conflict.
 *
 * 	The two-step approach is required because of the way the ## operator
 * 	works in ANSI C.
 */

#define	__prepaste(a,b)	a##b
#define	__paste(a,b)	__prepaste(a,b)

#define	p(x)	__paste(PREFIX,x)

