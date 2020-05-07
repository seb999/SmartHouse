#ifndef MISC_H
#define	MISC_H

void __delay_sec(int);
void ReadUartCmd(char *Output);
void SendUartCmd(char *cmd);
int UARTReadString(char *buf, int max_length);

#endif	/* MISC_H */

