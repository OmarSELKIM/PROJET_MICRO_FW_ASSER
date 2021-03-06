#include <xc.h>
#include "utils.h"


// #define WaitXLCD() while(BusyXLCD())
// #define ClearXLCD() WriteCmdXLCD(0x01)
//Variables globales
char S_vent_string[10];
int adc_value; //Variable valeur potentiom�tre


//Prototype de fonctions
void setup(void);
void loop(void);


// Programme principal

void main() {
    setup();
    LCD_Puts("loop ok");
    LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
    do {
        //T�che de fond
        //loop();

        
        if (!RTCC_TimeGet(&currentTime)) {
            char buff[8];
            itoa(buff, currentTime.tm_mday, 10);
            DisplayOnLcdPosition(1,0,buff);
            DisplayOnLcdPosition(1,2,"/");
            itoa(buff, currentTime.tm_mon, 10);
            DisplayOnLcdPosition(1,3,buff);
            DisplayOnLcdPosition(1,5," ");
            itoa(buff, currentTime.tm_hour, 10);
            DisplayOnLcdPosition(1,6,buff);
            DisplayOnLcdPosition(1,8,":");
            itoa(buff, currentTime.tm_min, 10);
            DisplayOnLcdPosition(1,9,buff);
            //LCD_CTRL_PORT = 0b00000001;
        }

    } while (1);
}

/*Fonctions*/
void setup(void) {
    Ports_Init(); //Initialisation ports
    PWM_Init(); //Initialisation PWM
    Timer_Init(); //Initalisation timer1 (PWM)
    // Interrupt_Init();
    RTCC_Initialize();
    LCD_Init(); //Initialisation LCD

    T0CONbits.TMR0ON = 1; //Switch On Timer-0
    TMR1ON = 1;
    TMR0L = 1; //reset timer 0 pour PWM
    LCD_Puts("Init ok");
    for (char i = 0; i < 200; i++) {
        __delay_ms(10);
    }
}

void loop(void) {

    /* if (TMR1IF == 1) {
         // increase the number of times interrupt has been fired
         count++;

         // count till 19 interrupts have been fired (about 1 second has elapsed)
         if (count == 2) { //21 --> 1000ms
             // toggle RD1 pin
             LATDbits.LATD1 ^= 1; //fait clignoter la LED

             S_vent = TMR0L; //Enregistre le nb de front du ventilateur du TIMER0

             //LCD_CTRL_PORT = 0x01; // Clear display
             TMR0L = 0; //reset timer
             // reset counter
             count = 00;
         }
         // reset the overflow interrupt flag
         TMR1IF = 0;
     }*/


    sprintf(S_vent_string, "%3dHz", S_vent);

    /* if (SWI_1 == 1) {

         adc_value = ADC_Read(); //Lis le potentiom�tre  
         PWM_Duty(adc_value); //Applique la valeur potar au Ventilateur en PWM


        
                 DisplayOnLcdPosition(1, 0, "Potar:");
                 __delay_ms(20);
                 // affichage_chaine(chaine_adc); //affiche LCD valeur PWM
                 DisplayOnLcdPosition(1, 6, chaine_adc);
                 __delay_ms(20);
                 DisplayOnLcdPosition(1, 9, "%");
                 __delay_ms(20);
                 DisplayOnLcdPosition(2, 11, S_vent_string);
                 __delay_ms(20);

                 if (code_clav == code_U1) {
                     DisplayOnLcdPosition(2, 0, "Code OK");
                     __delay_ms(20);
                     PWM_Duty(adc_value); //Applique la valeur potar au Ventilateur en PWM
                 }
                 else {
                     DisplayOnLcdPosition(2, 0, "Code:");
                     __delay_ms(20);
                     DisplayOnLcdPosition(2, 5, code_clav);
                     __delay_ms(20);
                 }

             }
             if (SWI_1 == 0) {
                 float temp = ((chaine_clav[0] - 0x30)*100 + (chaine_clav[1] - 0x30)*10 + (chaine_clav[2] - 0x30))*10.23;
                 PWM_clav = (int) round(temp);

                 __delay_ms(20);
                 DisplayOnLcdPosition(1, 0, "Clav:");
                 __delay_ms(20);
                 if (VAL_CLAV != 0x0f) {
                     DisplayOnLcdPosition(1, 5, chaine_clav);
                 }
                 __delay_ms(20);
                 LCD_Puts("%");
                 __delay_ms(20);
                 DisplayOnLcdPosition(2, 11, S_vent_string);
                 __delay_ms(20);

                 if (code_clav != code_U1 && code_U2 && code_U3) {
                     DisplayOnLcdPosition(2, 0, "Code:");
                     __delay_ms(20);
                 }

                 if (code_clav == code_U1 || code_U2 || code_U3) {
                     DisplayOnLcdPosition(2, 0, "Code OK");
                     __delay_ms(20);
                     PWM_Duty(PWM_clav); //Applique la valeur potar au Ventilateur en PWM
                 }
                 if (BP1 == 0) {
                     PWM_clav++;
                 }

                 if (BP2 == 0) {
                     PWM_clav--;
                 }

             }*/
}

