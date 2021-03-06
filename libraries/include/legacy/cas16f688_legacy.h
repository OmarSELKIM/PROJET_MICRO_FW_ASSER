#ifndef _CAS16F688_H_
#define _CAS16F688_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTC                                  equ 0007h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
BAUDCTL                                equ 0011h
SPBRGH                                 equ 0012h
SPBRG                                  equ 0013h
RCREG                                  equ 0014h
TXREG                                  equ 0015h
TXSTA                                  equ 0016h
RCSTA                                  equ 0017h
WDTCON                                 equ 0018h
CMCON0                                 equ 0019h
CMCON1                                 equ 001Ah
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL                                  equ 0091h
WPUA                                   equ 0095h
IOCA                                   equ 0096h
EEDATH                                 equ 0097h
EEADRH                                 equ 0098h
VRCON                                  equ 0099h
EEDAT                                  equ 009Ah
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#define IRP_bit                        STATUS, 7
#define RA0_bit                        PORTA, 0
#define RA1_bit                        PORTA, 1
#define RA2_bit                        PORTA, 2
#define RA3_bit                        PORTA, 3
#define RA4_bit                        PORTA, 4
#define RA5_bit                        PORTA, 5
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define RAIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RAIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define TXIF_bit                       PIR1, 1
#define OSFIF_bit                      PIR1, 2
#define C1IF_bit                       PIR1, 3
#define C2IF_bit                       PIR1, 4
#define RCIF_bit                       PIR1, 5
#define ADIF_bit                       PIR1, 6
#define EEIF_bit                       PIR1, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define T1GE_bit                       T1CON, 6
#define T1GINV_bit                     T1CON, 7
#define ABDEN_bit                      BAUDCTL, 0
#define WUE_bit                        BAUDCTL, 1
#define BRG16_bit                      BAUDCTL, 3
#define SCKP_bit                       BAUDCTL, 4
#define RCIDL_bit                      BAUDCTL, 6
#define ABDOVF_bit                     BAUDCTL, 7
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
#define SENDB_bit                      TXSTA, 3
#define SYNC_bit                       TXSTA, 4
#define TXEN_bit                       TXSTA, 5
#define TX9_bit                        TXSTA, 6
#define CSRC_bit                       TXSTA, 7
#define RX9D_bit                       RCSTA, 0
#define OERR_bit                       RCSTA, 1
#define FERR_bit                       RCSTA, 2
#define ADDEN_bit                      RCSTA, 3
#define CREN_bit                       RCSTA, 4
#define SREN_bit                       RCSTA, 5
#define RX9_bit                        RCSTA, 6
#define SPEN_bit                       RCSTA, 7
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define CM0_bit                        CMCON0, 0
#define CM1_bit                        CMCON0, 1
#define CM2_bit                        CMCON0, 2
#define CIS_bit                        CMCON0, 3
#define C1INV_bit                      CMCON0, 4
#define C2INV_bit                      CMCON0, 5
#define C1OUT_bit                      CMCON0, 6
#define C2OUT_bit                      CMCON0, 7
#define C2SYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define RAPU_bit                       OPTION, 7
#define TRISA0_bit                     TRISA, 0
#define TRISA1_bit                     TRISA, 1
#define TRISA2_bit                     TRISA, 2
#define TRISA3_bit                     TRISA, 3
#define TRISA4_bit                     TRISA, 4
#define TRISA5_bit                     TRISA, 5
#define TRISC0_bit                     TRISC, 0
#define TRISC1_bit                     TRISC, 1
#define TRISC2_bit                     TRISC, 2
#define TRISC3_bit                     TRISC, 3
#define TRISC4_bit                     TRISC, 4
#define TRISC5_bit                     TRISC, 5
#define TMR1IE_bit                     PIE1, 0
#define TXIE_bit                       PIE1, 1
#define OSFIE_bit                      PIE1, 2
#define C1IE_bit                       PIE1, 3
#define C2IE_bit                       PIE1, 4
#define RCIE_bit                       PIE1, 5
#define ADIE_bit                       PIE1, 6
#define EEIE_bit                       PIE1, 7
#define BOD_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define SBODEN_bit                     PCON, 4
#define ULPWUE_bit                     PCON, 5
#define SCS_bit                        OSCCON, 0
#define LTS_bit                        OSCCON, 1
#define HTS_bit                        OSCCON, 2
#define OSTS_bit                       OSCCON, 3
#define IOSCF0_bit                     OSCCON, 4
#define IOSCF1_bit                     OSCCON, 5
#define IOSCF2_bit                     OSCCON, 6
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define IRCF2_bit                      OSCCON, 6
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ANS4_bit                       ANSEL, 4
#define ANS5_bit                       ANSEL, 5
#define ANS6_bit                       ANSEL, 6
#define ANS7_bit                       ANSEL, 7
#define WPUA0_bit                      WPUA, 0
#define WPUA1_bit                      WPUA, 1
#define WPUA2_bit                      WPUA, 2
#define WPUA4_bit                      WPUA, 4
#define WPUA5_bit                      WPUA, 5
#define IOCA0_bit                      IOCA, 0
#define IOCA1_bit                      IOCA, 1
#define IOCA2_bit                      IOCA, 2
#define IOCA3_bit                      IOCA, 3
#define IOCA4_bit                      IOCA, 4
#define IOCA5_bit                      IOCA, 5
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define VREN_bit                       VRCON, 7
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#define EEPGD_bit                      EECON1, 7
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6

#endif
