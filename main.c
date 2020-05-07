#include "mcc_generated_files/mcc.h"
#include "main.h"
#include "misc.h"
#include <string.h>
#include <stdio.h>

/*
                         Main application
 */
int counter = 0;
char api[120]="";
char * token;
char * result;
char * result2;

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    INTERRUPT_GlobalInterruptDisable();
    INTERRUPT_PeripheralInterruptDisable();
    __delay_sec(10);
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    SWDTEN = 1;
   
    LED_SetHigh();
    __delay_ms(200);
    LED_SetLow();
    __delay_ms(200);
    LED_SetHigh();
    __delay_ms(200);
    LED_SetLow();
        
    while (1)
    {
        CLRWDT();
    }
}

void Inter_timer()
{
    CLRWDT();
    counter++;
    if(counter==600){
        // INTCONbits.TMR0IE = 0;
        counter = 0;
        
        __delay_sec(1);

        CLRWDT();
        SendUartCmd("AT+CIPSTART=\"TCP\",\"13.48.2.168\",80\r\n");
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        
        SendUartCmd("AT+CIPSEND=53\r\n"); 
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        
        SendUartCmd("GET http://www.dspx.eu/api/smarthouse/getswitchlist\r\n");
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
        ReadUartCmd(api);
           
        token = strtok(api," ,");//READ root code
        result = strtok (NULL,",");
        result = strtok (NULL,",");
        result = strtok (NULL,",");
        result = strtok (NULL,":");
        result = strtok (NULL,"}");

        if(strcmp(result,"true") == 0)
        {
            LED_SetHigh();
            MOTOR_SetHigh();
            SOUND_SetHigh();
        }
        if(strcmp(result,"false") == 0)
        {
            LED_SetLow();
            MOTOR_SetLow();
            SOUND_SetLow();
        }
    }
}
/**
 End of File
*/