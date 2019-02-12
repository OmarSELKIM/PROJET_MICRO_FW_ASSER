#include <P18CXXX.INC>

#ifdef __18F45K50
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif
#ifdef __18LF45K50 
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif
#ifdef __18F24K50 
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif
#ifdef __18LF24K50 
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif
#ifdef __18F25K50 
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif
#ifdef __18LF25K50 
#define TXSTA TXSTA1
#define SPBRG SPBRG1
#define RCSTA RCSTA1
#define TXREG TXREG1
#endif

#ifdef __18F1220
#define __USE_PORTB 1
#endif
#ifdef __18F1230
#define __USE_PORTB 1
#endif
#ifdef __18F1231
#define __USE_PORTB 1
#endif
#ifdef __18F1320
#define __USE_PORTB 1
#endif
#ifdef __18F1330
#define __USE_PORTB 1
#endif
#ifdef __18F1331
#define __USE_PORTB 1
#endif

  GLOBAL _usart_putc

STDIO CODE
  
_usart_putc  
              MOVLW     0xff
              MOVF      PLUSW1, w
              BTFSC     TXSTA, 0x5
              BRA       loop
              CLRF      SPBRG
              BSF       RCSTA, 0x7
              BSF       TXSTA, 0x5
#ifdef __USE_PORTB
              BCF       TRISB, 0x1
#else
              BCF       TRISC, 0x6
#endif
loop:         BTFSS     TXSTA, 0x1
              BRA       loop
              MOVWF     TXREG
              MOVWF     PRODL
              CLRF      PRODL + 1
             
              RETURN

    END
