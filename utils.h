/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: LARBEY
 * Comments:
 * Revision history: SELKIM
 */


#ifndef UTILS_H
#define	UTILS_H

#include <xc.h> // include processor files - each processor file is guarded.
#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
#include "mcc_generated_files/device_config.h"



#define LCD_DISP_CLEAR       0x01  //Clear display screen
#define LCD_RETUNR_HOME      0x02  //Return home
#define LCD_DEC_CURSOR_L     0x04  //Decrement cursor (shift cursor to left)
#define LCD_INC_CURSOR_R     0x06  //Increment cursor (shift cursor to right)
#define LCD_SHIFT_DISP_R        0x05  //Shift display right
#define LCD_SHIFT_DISP_L        0x07  //Shift display left
#define LCD_DISP_OFF_CURSOR_ON                 0x08  //Display off, cursor off
#define LCD_                 0x0A  //Display off, cursor on
#define LCD_                 0x0C  //Display on, cursor off
#define LCD_                 0x0E  //Display on, cursor blinking
#define LCD_                 0x0F  //Display on, cursor blinking
#define LCD_                 0x10  //Shift cursor position to left
#define LCD_                 0x14  //Shift cursor position to right
#define LCD_                 0x18  //Shift the entire display to the left
#define LCD_                 0x1C  //Shift the entire display to the right
#define LCD_                 0x80  //Force cursor to beginning ( 1st line)
#define LCD_                 0xC0  //Force cursor to beginning ( 2nd line)



unsigned char VAL_CLAV = 0, cpt18TCY = 0, RX_U_2, PWM_VAL;
char chaine_adc[100], chaine_clav[4] = {'0', '0', '0', '\0'};
int a = 0, PWM_clav = 0, adc_value;
unsigned char RX_U_2;
char chaine_asser[16];
int iREAD = 0;
volatile int count = 0;
int S_vent = 0;

/*
 *          - The user must provide three delay routines:
 *              - DelayFor18TCY() provides a 18 Tcy delay
 *              - DelayPORXLCD() provides at least 15ms delay
 *              - DelayXLCD() provides at least 5ms delay
 */
void DelayFor18TCY(void);
void DelayLCDLong(void);
void DelayLCDShort(void);

void Ports_init();
void PWM_init();
void PWM_Duty(unsigned int duty);
void Timer_init();
void PORT_init();
void LCD_Init();
void LCD_Puts(char chaine[]);
void LCD_Clear(void);
void afficheur_write_clav();
void DisplayOnLcdPosition(char line, char row, char data[]);
void send_1(char c);
void send_msg(char *c);
void interrupt interruptions(void);
void UART_PrintByte(char c);
void UART_PrintStr(char *c);
void CLAVIER_read();
unsigned int ADC_Read();

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* UTILS_H */

