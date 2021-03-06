#ifndef _CAS16715_H_
#define _CAS16715_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#ifndef _16C715
DATACCP                                equ 0007h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
#ifndef _16C715
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#endif
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#ifndef _16C715
TRISCCP                                equ 0087h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
#ifndef _16C715
PR2                                    equ 0092h
#endif
ADCON1                                 equ 009Fh
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#ifndef _16C715
#define DCCP_bit                       DATACCP, 2
#define DT1CK_bit                      DATACCP, 0
#endif
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define ADIF_bit                       PIR1, 6
#if defined(_16C712) || defined(_16C716)
#define CCP1IF_bit                     PIR1, 2
#define TMR2IF_bit                     PIR1, 1
#define TMR1IF_bit                     PIR1, 0
#endif
#ifndef _16C715
#define T1CKPS1_bit                    T1CON, 5
#define T1CKPS0_bit                    T1CON, 4
#define T1OSCEN_bit                    T1CON, 3
#define T1SYNC_bit                     T1CON, 2
#define TMR1CS_bit                     T1CON, 1
#define TMR1ON_bit                     T1CON, 0
#define TOUTPS3_bit                    T2CON, 6
#define TOUTPS2_bit                    T2CON, 5
#define TOUTPS1_bit                    T2CON, 4
#define TOUTPS0_bit                    T2CON, 3
#define TMR2ON_bit                     T2CON, 2
#define T2CKPS1_bit                    T2CON, 1
#define T2CKPS0_bit                    T2CON, 0
#define DC1B1_bit                      CCP1CON, 5
#define DC1B0_bit                      CCP1CON, 4
#define CCP1M3_bit                     CCP1CON, 3
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M0_bit                     CCP1CON, 0
#endif
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS2_bit                       ADCON0, 5
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define ADGO_bit                       ADCON0, 2
#define GODONE_bit                     ADCON0, 2
#define ADON_bit                       ADCON0, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRISA5_bit                     TRISA, 5
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TRISA1_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0
#ifndef _16C715
#define TCCP_bit                       TRISCCP, 2
#define TT1CK_bit                      TRISCCP, 0
#endif
#define ADIE_bit                       PIE1, 6
#if defined(_16C712) || defined(_16C716)
#define CCP1IE_bit                     PIE1, 2
#define TMR2IE_bit                     PIE1, 1
#define TMR1IE_bit                     PIE1, 0
#endif
#ifdef _16C715
#define MPECS_bit                      PCON, 7
#define PER_bit                        PCON, 2
#endif
#define POR_bit                        PCON, 1
#define BOR_bit                        PCON, 0
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#ifdef _16C715
#endif

#endif
