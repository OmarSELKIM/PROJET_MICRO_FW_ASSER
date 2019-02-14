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
#include <RTCC.h>
#include "mcc_generated_files/device_config.h"
#include "mcc_generated_files/rtcc.h"



#define LCD_CMD_DISP_CLEAR          0x01  //Clear display screen
#define LCD_CMD_RETUNR_HOME         0x02  //Return home
#define LCD_CMD_DEC_CURSOR_L        0x04  //Decrement cursor (shift cursor to left)
#define LCD_CMD_INC_CURSOR_R        0x06  //Increment cursor (shift cursor to right)
#define LCD_CMD_SHIFT1_DISP_R       0x05  //Shift display right
#define LCD_CMD_SHIFT1_DISP_L       0x07  //Shift display left
#define LCD_CMD_DISP_OFF_CURS_OFF   0x08  //Display off, cursor off
#define LCD_CMD_DISP_OFF_CURS_ON    0x0A  //Display off, cursor on
#define LCD_CMD_DISP_ON_CURS_OFF    0x0C  //Display on, cursor off
#define LCD_CMD_DISP_ON_CURS_BLK    0x0F  //Display on, cursor blinking
#define LCD_CMD_SHIFT_CURSOR_L      0x10  //Shift cursor position to left
#define LCD_CMD_SHIFT2_CURSOR_R     0x14  //Shift cursor position to right
#define LCD_CMD_SHIFT2_DISP_L       0x18  //Shift the entire display to the left
#define LCD_CMD_SHIFT2_DISP_R       0x1C  //Shift the entire display to the right
#define LCD_CMD_GOTO_START_L1       0x80  //Force cursor to beginning ( 1st line)
#define LCD_CMD_GOTO_START_L2       0xC0  //Force cursor to beginning ( 2nd line)

#define LCD_SHIFT_LEFT          0x01
#define LCD_SHIFT_RITGH         0x02

typedef struct User{
    byte UserId;
    byte UserPsw;
}User;

struct tm currentTime;

User usrTab[3];

unsigned char VAL_CLAV = 0, cpt1TCY = 0, RX_U_2, PWM_VAL;
char chaine_adc[100];
char chaine_clav[4] = {'0', '0', '0', '\0'};
char code_malette[5] = {'1', '2', '3', '4', '\0'};
char code_clav[5] = {'_', '_', '_', '_', '\0'};
char code_U1[5] = {'0', '0', '0', '0', '\0'};
char code_U2[5] = {'0', '0', '0', '0', '\0'};
char code_U3[5] = {'0', '0', '0', '0', '\0'};
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
void DelayFor1TCY(void);

void Ports_Init();
void PWM_Init();
void Timer_Init();
void PORT_Init();
void Interrupt_Init(void);

void PWM_Duty(unsigned int duty);

void DelayLCDLong(void);
void DelayLCDShort(void);
void LCD_Init();
void LCD_Putc(char car);
void LCD_Puts(char chaine[]);
void lcdAFF(char info[]);
void LCD_SetCursorAt(unsigned char _line,unsigned char _row);
void LCD_Clear(void);
void LCD_ReturnHome(void);
void LCD_ShiftDisplay(byte _direction,int _offset);

void afficheur_write_clav();
void DisplayOnLcdPosition(char line, char row, char data[]);
void interrupt interruptions(void);

void UART_Putc(char c);
void UART_Puts(char c[]);


byte CLAVIER_GetPressedKey(void);

unsigned int ADC_Read();

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* UTILS_H */

