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
    //Interrupt_Init();
    LCD_Init(); //Initialisation LCD

    T0CONbits.TMR0ON = 1; //Switch On Timer-0
    TMR1ON = 1;
    TMR0L = 1; //reset timer 0 pour PWM
    LCD_Puts("Init ok");
    Delay_ms(500);
}

void loop(void) {
    //Pour fonctionner, désactiver les fonctions LCD
    LCD_SetCursorAt(1,4);
    LCD_Puts("Loop()");
    Delay_ms(250);
    LCD_ShiftDisplay(LCD_SHIFT_LEFT,1);
    Delay_ms(250);
    LCD_ShiftDisplay(LCD_SHIFT_LEFT,1);
    Delay_ms(250);
    LCD_ShiftDisplay(LCD_SHIFT_LEFT,1);
    //Pour fonctionner, désactiver les fonctions LCD
    //PORTD = TMR0L; //Output count value on Port-D, compte sur les LEDs

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

    if (SWI_1 == 1) {

        adc_value = ADC_Read(); //Lis le potentiomètre  
        PWM_Duty(adc_value); //Applique la valeur potar au Ventilateur en PWM

        DisplayOnLcdPosition(1, 0, "Potar:");
        Delay_ms(20);
        // affichage_chaine(chaine_adc); //affiche LCD valeur PWM
        DisplayOnLcdPosition(1, 6, chaine_adc);
        Delay_ms(20);
        DisplayOnLcdPosition(1, 9, "%");
        Delay_ms(20);
        DisplayOnLcdPosition(2, 11, S_vent_string);
        Delay_ms(20);
        DisplayOnLcdPosition(2, 0, "Code:");
        Delay_ms(20);
        DisplayOnLcdPosition(2, 6, chaine_clav);
        Delay_ms(20);

    }
    if (SWI_1 == 0) {
        float temp = ((chaine_clav[0] - 0x30)*100 + (chaine_clav[1] - 0x30)*10 + (chaine_clav[2] - 0x30))*10.23;
        PWM_clav = (int) round(temp);

        LCD_CTRL_PORT = 0x80; // Force 1ere ligne
        Delay_ms(20);
        DisplayOnLcdPosition(1, 0, "Clav:");
        Delay_ms(20);
        if (VAL_CLAV != 0x0f) {
            DisplayOnLcdPosition(1, 5, chaine_clav);
        }
        Delay_ms(20);
        LCD_Puts("%");
        Delay_ms(20);
        // DisplayOnLcdPosition(2, 7, "Asser:");
        Delay_ms(20);
        DisplayOnLcdPosition(2, 11, S_vent_string);
        Delay_ms(20);
        DisplayOnLcdPosition(2, 0, "Code:");

    }

    /* if (BP1 == 0) {
         //LCD_CTRL_PORT = 0xC0; // Force 2eme ligne
         //LCD_CTRL_PORT = 0x01; // Clear display
         //LCD_CTRL_PORT = 0x10; // Return Home

         PWM_clav++;
         adc_value++;
     }
     if (BP2 == 0) {

         PWM_clav--;
         adc_value--;
     }*/
    /*if (SWI_4 == 1)
        LED_0 = 1;
    else
        LED_0 = 0;*/
}

