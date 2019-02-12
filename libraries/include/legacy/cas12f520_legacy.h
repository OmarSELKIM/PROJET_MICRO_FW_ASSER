#ifndef _CAS12F520_H_
#define _CAS12F520_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define nPD_bit                        STATUS, 3
#define nTO_bit                        STATUS, 4
#define PA0_bit                        STATUS, 5
#define PA1_bit                        STATUS, 6
#define RBWUF_bit                      STATUS, 7
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
#ifndef _LIB_BUILD
#endif
PORTB                                  equ 0006h
#define RB0_bit                        PORTB, 0
#define RB1_bit                        PORTB, 1
#define RB2_bit                        PORTB, 2
#define RB3_bit                        PORTB, 3
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#ifndef _LIB_BUILD
#endif
EECON                                  equ 0021h
#define RD_bit                         EECON, 0
#define WR_bit                         EECON, 1
#define WREN_bit                       EECON, 2
#define WRERR_bit                      EECON, 3
#define FREE_bit                       EECON, 4
#ifndef _LIB_BUILD
#endif
EEDATA                                 equ 0025h
EEADR                                  equ 0026h
WREG                                   equ 0051h
STKPTR                                 equ 0052h
TRISB                                  equ 0053h
#define TRISB0_bit                     TRISB, 0
#define TRISB1_bit                     TRISB, 1
#define TRISB2_bit                     TRISB, 2
#define TRISB3_bit                     TRISB, 3
#define TRISB4_bit                     TRISB, 4
#define TRISB5_bit                     TRISB, 5
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0054h
#define PSA_bit                        OPTION_REG, 3
#define T0SE_bit                       OPTION_REG, 4
#define T0CS_bit                       OPTION_REG, 5
#define nRBPU_bit                      OPTION_REG, 6
#define nRBWU_bit                      OPTION_REG, 7
#ifndef _LIB_BUILD
#endif

#endif
