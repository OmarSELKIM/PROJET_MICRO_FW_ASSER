#include "utils.h"

/*
 *          - The user must provide three delay routines:
 *              - DelayFor18TCY() provides a 18 Tcy delay
 *              - DelayPORXLCD() provides at least 15ms delay
 *              - DelayXLCD() provides at least 5ms delay
 */
void DelayFor1TCY(void) {
    cpt1TCY++; //1 top tclk
}

void DelayLCDLong(void) {
    __delay_ms(5);
}

void DelayLCDShort(void) {
    __delay_us(50);
}

void Interrupt_Init(void) {
    INTCON2 = 0b01111001;
    INTCON = 0b11001001;
    INTCONbits.INT0IE = 1;
    INTCONbits.GIE = 1;
    INTCONbits.INT0IF = 0;
    RCONbits.IPEN = 1;
    PIE1bits.ADIE = 1;
    IPR1bits.ADIP = 1;
    PIR1bits.ADIF = 0;
    INTCON3 = 0b01001001;
}

void Ports_Init() {
    //Config IT
    INTCON = 0b11010000;
    // Désactivation du bus externe
    MEMCON = 0xA0; //ebdis=1 bus désactivé (sauf en cas d'accès externe)
    // Désactivation des fonctions analogiques
    ANCON0 = 0x00;
    ANCON1 = 0x00;
    ANCON2 = 0x00;
    // Définition du sens des ports
    TRISC = 0x00; // 0 => PORTC en sortie
    TRISD = 0x00; // 0 => PORTD en sortie
    TRISH = 0xFF; // 1 => PORTH en entrée
    TRISG = 0xFF; // 1 => PORTG en entrée

    // Première initialisation des LEDs
    LATD = 0b00000001;
    //LATD = 1;

    // setup UART1
    TRISCbits.TRISC6 = 0;
    TRISCbits.TRISC7 = 1;
    TXSTA1bits.SYNC = 0;
    TXSTA1bits.TX9 = 0;
    TXSTA1bits.TXEN = 1;
    RCSTA1bits.RX9 = 0;
    RCSTA1bits.CREN = 1;
    RCSTA1bits.SPEN = 1;
    PIE1bits.RC1IE = 1; // Enable RX interupt
    // IPR1bits.RC1IP = 1; // Enable High priority pas utile

    // Setting for 9600 BPS UART1
    BAUDCON1bits.BRG16 = 0;
    TXSTA1bits.BRGH = 0;
    SPBRG1 = 17; // pour freq de 11Mhz

    //Déclaration Timer0 lecture PWM
    TRISAbits.TRISA4 = 1; //Enable T0CKI 
    TRISB = 0; //Port-B as Input
    T0CON = 0x68; //Timer-0 8-bit Mode, No Prescaler 0b01101000
    //Increment on Low-to-High Transition
    TMR0L = 0; //Timer Low register

    //T1CON = 0b01101001; //source clock 01 + 1:4 prescale 10 + enable 1 + not sync 1 + 8bits 1 + enable 1 

    __delay_ms(50);
}

void PWM_Init() {
    PR2 = (_XTAL_FREQ / (PWM_freq * 4 * TMR2PRESCALE)) - 1; //Setting the PR2 formulae using Datasheet // Makes the PWM work in 1KHZ
    CCP1M3 = 1;
    CCP1M2 = 1; //Configure the CCP1 module 
    T2CKPS0 = 1;
    T2CKPS1 = 0;
    TMR2ON = 1; //Configure the Timer module
    TRISC2 = 0; // make port pin on C as output
    //T2CON = 0b00000111; //Timer 2 Scale to 16    CCP1M3 = 1;
}

void PWM_Duty(unsigned int duty) {
    if (duty < 1023) {

        duty = ((float) duty / 1023)*(_XTAL_FREQ / (PWM_freq * TMR2PRESCALE)); // On reducing //duty = (((float)duty/1023)*(1/PWM_freq)) / ((1/_XTAL_FREQ) * TMR2PRESCALE);
        CCP1X = duty & 1; //Store the 1st bit
        CCP1Y = duty & 2; //Store the 0th bit
        CCPR1L = duty >> 2; // Store the remining 8 bit
    }
}

void Timer_Init() {

    T1CON = 0b01101001;

    // enable peripheral interrupts
    INTCONbits.PEIE = 1;

    // enable global interrupts
    INTCONbits.GIE = 1;

}

void PORT_Init() {
    //Config IT
    INTCON = 0b11010000;
    // Désactivation du bus externe
    //MEMCON = 0xA0; //ebdis=1 bus désactivé (sauf en cas d'accès externe)
    // Désactivation des fonctions analogiques
    ANCON0 = 0x00;
    ANCON1 = 0x00;
    ANCON2 = 0x00;
    // Définition du sens des ports
    TRISC = 0x00; // 0 => PORTC en sortie
    TRISD = 0x00; // 0 => PORTD en sortie
    TRISH = 0xFF; // 1 => PORTH en entrée
    TRISG = 0xFF; // 1 => PORTG en entrée

    // Première initialisation des LEDs
    //LATD = 0b00000001;
    //LATD = 1;

    // setup UART1
    TRISCbits.TRISC6 = 0;
    TRISCbits.TRISC7 = 1;
    TXSTA1bits.SYNC = 0;
    TXSTA1bits.TX9 = 0;
    TXSTA1bits.TXEN = 1;
    RCSTA1bits.RX9 = 0;
    RCSTA1bits.CREN = 1;
    RCSTA1bits.SPEN = 1;
    PIE1bits.RC1IE = 1; // Enable RX interupt
    // IPR1bits.RC1IP = 1; // Enable High priority pas utile

    // Setting for 9600 BPS UART1
    BAUDCON1bits.BRG16 = 0;
    TXSTA1bits.BRGH = 0;
    SPBRG1 = 17; // pour freq de 11Mhz
    /*
        //Déclaration Timer0 lecture PWM
        TRISAbits.TRISA4 = 1; //Enable T0CKI 
        TRISB = 0; //Port-B as Input
        T0CON = 0x68; //Timer-0 8-bit Mode, No Prescaler 0b01101000
        //Increment on Low-to-High Transition
        TMR0L = 0; //Timer Low register

        T1CON = 0b01111001; //source clock 01 + 1:8 prescale 11 + enable 1 + not sync 1 + 8bits 1 + enable 1 
     */
    __delay_ms(50);
}

void LCD_Init() {
    //Config IT
    //INTCON=0b10010000;

    // Désactivation du bus externe
    MEMCON = 0x20; //ebdis=0 bus activé

    // Activer les fonctions analogiques
    TRISAbits.TRISA0 = 1;

    ANCON0 = 0x01;
    ANCON1 = 0x00;
    ANCON2 = 0x00;

    ADCON0 = 0x00;
    ADCON1 = 0x00;
    ADCON2 = 0x80;

    ADCON0 = 0x01;

    TRISGbits.TRISG0 = 0;
    LATGbits.LATG0 = 0;

    __delay_ms(50);
    __delay_ms(50);


    LCD_CTRL_PORT = 0x33;
    __delay_ms(50);
    LCD_CTRL_PORT = 0x33;
    __delay_ms(50);
    LCD_CTRL_PORT = 0x33;


    __delay_ms(50);
    LCD_CTRL_PORT = 0x38;
    __delay_ms(50);
    LCD_CTRL_PORT = 0x0C;
    __delay_ms(50);
    LCD_CTRL_PORT = 0x06;
    __delay_ms(50);
    LCD_CTRL_PORT = 0x01;
    __delay_ms(50);

    LCD_CTRL_PORT = 0x80;
    __delay_ms(50);
}

void LCD_Putc(char car) {
    LCD_DATA_PORT = car;
    DelayLCDShort();
}

void LCD_Puts(char chaine[]) {
    unsigned char i = 0;
    while (chaine[i] != '\0') {
        LCD_DATA_PORT = chaine[i];
        i++;
        DelayLCDShort();
    }
}

void LCD_SetCursorAt(unsigned char _line, unsigned char _row) {
    if (_line == 1) {
        LCD_CTRL_PORT = (0x80) | ((_row) & 0x0f);
    } else {
        LCD_CTRL_PORT = (0xC0) | ((_row) & 0x0f);
    }
    DelayLCDShort();
}

void LCD_Clear(void) {
    LCD_CTRL_PORT = LCD_CMD_DISP_CLEAR;
    DelayLCDLong();
}

void LCD_ReturnHome(void) {
    LCD_CTRL_PORT = LCD_CMD_RETUNR_HOME;
    DelayLCDLong();
}

void LCD_ShiftDisplay(byte _direction, int _offset) {
    for (byte i = 0; i <= _offset; i++) {
        if (_direction == LCD_SHIFT_LEFT) {
            LCD_CTRL_PORT = LCD_CMD_SHIFT1_DISP_L;
        } else {
            LCD_CTRL_PORT = LCD_CMD_SHIFT1_DISP_R;
        }
        DelayLCDShort();
    }
}

void afficheur_write_clav() {
    LCD_DATA_PORT = VAL_CLAV + 0x30;
    __delay_ms(50);
}

void DisplayOnLcdPosition(char line, char row, char data[]) {

    if (line == 1)
        LCD_CTRL_PORT = (0x80) | ((row) & 0x0f);
    else
        LCD_CTRL_PORT = (0xC0) | ((row) & 0x0f);
    __delay_ms(20);
    LCD_Puts(data);
    __delay_ms(20);
}

void interrupt interruptions(void) {
    if (RC2IF) {
        while (PIR3bits.RC2IF == 0) {
            if (RCSTA2bits.OERR == 1) {
                RCSTA2bits.OERR = 0; // clear overrun if it occurs
                RCSTA2bits.CREN = 0;
                RCSTA2bits.CREN = 1;
                DisplayOnLcdPosition(1, 10, "yes");
            }
        }
        RX_U_2 = RCREG2;
        UART_Putc(RX_U_2);
    }

    if (INT0IF) // flag 1
    {
        INT0IF = 0; // Reset the external interrupt flag
        CLAVIER_GetPressedKey();
        //LCD_CTRL_PORT = 0x14; //déplace le curseur à droite
        //LCD_CTRL_PORT = 0x10; //déplace le curseur à gauche
        switch (VAL_CLAV) {
            case 0x0c: //flèche gauche
                LCD_CTRL_PORT = 0x10; //déplace le curseur à gauche
                __delay_ms(50);
                break;
            case 0x0d: //flèche droite
                LCD_CTRL_PORT = 0x14; //déplace le curseur à droite
                __delay_ms(50);
                break;
            case 0x0e: //AC
                LCD_CTRL_PORT = 0x80;
                __delay_ms(50);
                LCD_CTRL_PORT = 0x01;
                __delay_ms(50);
                PWM_Duty(0); //Applique la valeur potar au Ventilateur en PWM
                break;
            case 0x0f: //ENT

                //send_1(0x09); //décale TAB
                //send_1(0x09); //décale TAB
                UART_Putc(0x14); //petite police
                //send_1(0x0E); //grande police

                if (SWI_1 == 1) {
                    // send_msg(chaine_adc);
                }
                if (SWI_1 == 0) {
                    //send_msg(VAL_CLAV);
                    UART_Puts("PWM Clav:");
                    __delay_ms(20);
                    UART_Puts(chaine_clav);
                    __delay_ms(20);
                    UART_Putc('%');
                    __delay_ms(20);
                    PWM_Duty(PWM_clav); //Applique la valeur potar au Ventilateur en PWM
                }
                __delay_ms(20);
                UART_Putc(0x0A); //Retour à la ligne imprimante
                UART_Putc(0x0D); //Retour chariot
                __delay_ms(50);
                break;
            default:
                //afficheur_write_clav(); //Affiche la valeur du clavier
                //LCD_CTRL_PORT = 0x14; //déplace le curseur à droite
                break;
        }
    }
}

void UART_Putc(char c) {
    while (UART_BUSY);
    TXREG1 = c;
}

void UART_Puts(char c[]) {
    for (int i = 0; i < 14; i++) {
        while (UART_BUSY);
        UART_Putc(c[i]);
    }
}

byte CLAVIER_GetPressedKey(void) {
    byte _val = 0x00;
    _val = CLAVIER & 0x0f;
    return _val;
}

unsigned int ADC_Read() {
    //unsigned long adc_result;
    unsigned long pot;
    unsigned long pot_value;
    int valeur_pwm;

    ADCON0bits.GO = 1;

    while (ADCON0bits.GO); //Bloquant

    if (ADRES > 0xB33) {
        LATGbits.LATG0 = 1;
    } else {
        LATGbits.LATG0 = 0;
    }

    //adc_result = ADRES * 1023 / 4095; //Convertie sur 0-1023
    //return adc_result;
    pot = ADRES;
    pot_value = pot * 1023 / 4095; //Convertie sur 0-1023
    valeur_pwm = pot_value * 100 / 1023;
    PWM_VAL = (char) (valeur_pwm);
    sprintf(chaine_adc, "%3d", pot_value * 100 / 1023);
    return pot_value;
}