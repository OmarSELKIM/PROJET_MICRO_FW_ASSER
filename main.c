#include <xc.h>
#include "utils.h"


// #define WaitXLCD() while(BusyXLCD())
// #define ClearXLCD() WriteCmdXLCD(0x01)
//Variables globales
char S_vent_string[10];
int adc_value; //Variable valeur potentiomètre


//Prototype de fonctions
void setup(void);
void loop(void);


// Programme principal

void main() {
    setup();
    LCD_Puts("loop ok");
    LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
    do {
        //Tâche de fond
        loop();
    } while (1);
}

/*Fonctions*/
void setup(void) {
    Ports_Init(); //Initialisation ports
    PWM_Init(); //Initialisation PWM
    Timer_Init(); //Initalisation timer1 (PWM)
    Interrupt_Init();
    RTCC_Initialize();
    LCD_Init(); //Initialisation LCD

    T0CONbits.TMR0ON = 1; //Switch On Timer-0
    TMR1ON = 1;
    TMR0L = 1; //reset timer 0 pour PWM

    LCD_Puts("Init ok");
    for (char i = 0; i < 200; i++) {
        __delay_ms(10);
    }
    LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
}

void loop(void) {

    if (TMR1IF == 1) {
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
    }


    sprintf(S_vent_string, "%3dHz", S_vent);

    if (flag_change == 0) {
        flag_change = 1;
        LCD_CTRL_PORT = 0x01;
        code_OK = 0;
        chaine_clav[0] = '_';
        chaine_clav[1] = '_';
        chaine_clav[2] = '_';
        chaine_clav[3] = '_';
    }

    if (code_OK == 0) {
        DisplayOnLcdPosition(1, 0, "Entrer un code:");
        __delay_ms(20);
        DisplayOnLcdPosition(2, 6, chaine_clav);
        __delay_ms(20);
        if (code_malette[0] == chaine_clav[0] && code_malette[1] == chaine_clav[1] && code_malette[2] == chaine_clav[2] && code_malette[3] == chaine_clav[3]) {
            code_OK = 1;
            LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
            __delay_ms(20);
            DisplayOnLcdPosition(1, 4, "Code OK");
            for (char i = 0; i < 200; i++) {
                __delay_ms(10);
            }
            LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
            __delay_ms(20);

        }
    }

    if (code_OK == 1) {

        time_display(2);

        if (menu == 0) { //POTENTIOMETRE
            PWM_Duty(adc_value); //Applique la valeur potar au Ventilateur en PWM
            adc_value = ADC_Read(); //Lis le potentiomètre  
            PWM_Duty(adc_value); //Applique la valeur potar au Ventilateur en PWM

            DisplayOnLcdPosition(1, 0, "Potar:");
            __delay_ms(20);
            // affichage_chaine(chaine_adc); //affiche LCD valeur PWM
            DisplayOnLcdPosition(1, 6, chaine_adc);
            __delay_ms(20);
            DisplayOnLcdPosition(1, 9, "%");
            __delay_ms(20);
            DisplayOnLcdPosition(1, 11, S_vent_string);
            __delay_ms(20);
            time_display(2);
        }

        if (menu == 1) { //CLAVIER

            float temp = ((clav_pwm[0] - 0x30)*10 + (clav_pwm[1] - 0x30))*10.23;
            PWM_clav = (int) round(temp);

            __delay_ms(20);
            DisplayOnLcdPosition(1, 0, "Clav:");
            __delay_ms(20);
            DisplayOnLcdPosition(1, 5, clav_pwm);
            __delay_ms(20);
            DisplayOnLcdPosition(1,7,"%    ");
            __delay_ms(20);
            DisplayOnLcdPosition(1, 11, S_vent_string);

            PWM_Duty(PWM_clav); //Applique la valeur potar au Ventilateur en PWM

            if (BP1 == 0) {
                PWM_clav++;
            }

            if (BP2 == 0) {
                PWM_clav--;
            }
        }
    }
}


