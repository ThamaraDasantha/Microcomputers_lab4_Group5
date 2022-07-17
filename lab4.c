
// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
#define _XTAL_FREQ 20000000
#include <xc.h>
void __interrupt() isr(void) //ISR
{
    if (INTCONbits.INTF == 1){    // Checking RB0/INT External Interrupt Flag bit        
            PORTCbits.RC1 = 1;  //Motor 2 ON 
            PORTCbits.RC0 = 0; //Motor 1 OFF
            __delay_ms(500); 
            PORTCbits.RC1 = 0;  //Motor 2 ON
    } 
    INTCONbits.INTF = 0;// Setting RB0/INT External Interrupt Flag bit to a logic low after 10 seconds   
     
} 
 
void main(void){
    INTCONbits.GIE = 1;  // Global Interrupt Enable bit
    INTCONbits.PEIE = 1; // Peripheral Interrupt Enable bit
    INTCONbits.INTE = 1; // RB0/INT External Interrupt Enable bit
    
    
    OPTION_REGbits.INTEDG = 1; //Interrupt Edge Select bit
    TRISC0 = 0;    // Motor 1 AS OUTPUT
    TRISC1 = 0;     // Motor 2 AS OUTPUT
    
    TRISB0 = 1; //switch 3 AS INPUT
    TRISB1 = 1; //switch 2
    TRISB2 = 1; //switch 1
    
    while(1){
        if (INTCONbits.INTF == 0){         // check switch 3
            PORTCbits.RC1 = 0;             // Motor 2 OFF
            PORTCbits.RC0 = 1;            // Motor 1 ON
        }   
    }
    return;  
}