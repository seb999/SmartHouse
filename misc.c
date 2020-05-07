#include "misc.h"
#include <stdint.h>
#include <xc.h>
#include <stdbool.h>
#include <string.h>
#include "mcc_generated_files/mcc.h"


//----------OTHERS----------
void __delay_sec(int n){
    while(n--) __delay_ms(1000); 
}

//----------EUART EXTENTION METHODS----------
void ReadUartCmd(char *output)
{
//    memset(*output, 0, sizeof(output)/sizeof(char));
    memset(output, 0, 30);
    int i = 0;
    char token;
    token = EUSART_Read();
    
    if (token == '\0' || token == '\n' || token == '\r') {
        exit;
    };
    
    while(token!='\n'){
        output[i] = token;
        token = EUSART_Read();
        i++;
    }
}

void SendUartCmd(char *cmd)
{
    for(int i=0;cmd[i] != '\0' ;i++)
        EUSART_Write(cmd[i]);
}