/**
  @Generated PIC10 / PIC12 / PIC16 / PIC18 MCUs Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    mcc.c

  @Summary:
    This is the device_config.h file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18F87K22
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45 or later
        MPLAB             :  MPLAB X 4.15
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
 */

#ifndef DEVICE_CONFIG_H
#define	DEVICE_CONFIG_H

/* Configuration du PIC:
    Oscillateur: HS (11.0592MHz)
    Watchdog Timer: désactivé
    Protection du code: désactivé */
#pragma config CONFIG1L = 0x1D
#pragma config CONFIG1H = 0x03 //HS_OSC
#pragma config CONFIG2L = 0x61 //BOR et PWRT Disable
#pragma config CONFIG2H = 0x00 //WDT off
#pragma config CONFIG3L = 0x01 //0x01:Bus D:8bit A:20bit
#pragma config CONFIG3H = 0x8B //MCLR
#pragma config CONFIG4L = 0x81 //0x81=debug_off 0x01=DEBUG_ON
#pragma config CONFIG5L = 0xFF //No CODE PROTECT
#pragma config CONFIG5H = 0xC0 //No CP EEPROM + code
#pragma config CONFIG6L = 0xFF //No write protect...
#pragma config CONFIG6H = 0xE0 //No write protect config...
#pragma config CONFIG7L = 0xFF //No table read protection
#pragma config CONFIG7H = 0x40 //No table read protection

//Déclaration ports
#define SWI_1   PORTHbits.RH4
#define SWI_4   PORTHbits.RH7
#define LED_0   LATDbits.LATD0
//#define LED_1   LATDbits.LATD1
//#define LED_2   LATDbits.LATD2
//#define LED_3   LATDbits.LATD3
//#define LED_4   LATDbits.LATD4
//#define LED_5   LATDbits.LATD5
//#define LED_6   LATDbits.LATD6
//#define LED_7   LATDbits.LATD7

#define byte char

#define UART_BUSY TXSTA1bits.TRMT == 0

//#define BP1     PORTGbits.RG3
#define _XTAL_FREQ 11059200
//Déclaration PWM
#define TMR2PRESCALE 16
long PWM_freq = 12000;
long Tosc = (1 / _XTAL_FREQ);



//Déclaration des periphériques du bus externe
far unsigned char CLAVIER @ 0x180000;
far unsigned char EEPROM @ 0x100; // Bloquer les interruption
/* DATA_PORT defines the port to which the LCD data lines are connected */
far unsigned char LCD_DATA_PORT @ 0x1A0002;
/* CTRL_PORT defines the port where the control lines are connected.
 * These are just samples, change to match your application.
 */
far unsigned char LCD_CTRL_PORT @ 0x1A0000;

#endif	/* DEVICE_CONFIG_H */
/**
 End of File
 */
