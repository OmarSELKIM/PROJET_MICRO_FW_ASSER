#ifndef _AS12F520_LEGACY_H_
#define _AS12F520_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define nPD                            STATUS, 3
#define nTO                            STATUS, 4
#define PA0                            STATUS, 5
#define PA1                            STATUS, 6
#define RBWUF                          STATUS, 7
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
#ifndef _LIB_BUILD
#endif
PORTB                                  equ 0006h
#define RB0                            PORTB, 0
#define RB1                            PORTB, 1
#define RB2                            PORTB, 2
#define RB3                            PORTB, 3
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#ifndef _LIB_BUILD
#endif
EECON                                  equ 0021h
#define RD                             EECON, 0
#define WR                             EECON, 1
#define WREN                           EECON, 2
#define WRERR                          EECON, 3
#define FREE                           EECON, 4
#ifndef _LIB_BUILD
#endif
EEDATA                                 equ 0025h
EEADR                                  equ 0026h
WREG                                   equ 0051h
STKPTR                                 equ 0052h
TRISB                                  equ 0053h
#define TRISB0                         TRISB, 0
#define TRISB1                         TRISB, 1
#define TRISB2                         TRISB, 2
#define TRISB3                         TRISB, 3
#define TRISB4                         TRISB, 4
#define TRISB5                         TRISB, 5
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0054h
#define PSA                            OPTION_REG, 3
#define T0SE                           OPTION_REG, 4
#define T0CS                           OPTION_REG, 5
#define nRBPU                          OPTION_REG, 6
#define nRBWU                          OPTION_REG, 7
#ifndef _LIB_BUILD
#endif

#endif
