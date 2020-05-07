/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F1709
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.35	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISBbits.TRISB7
#define LED_LAT                  LATBbits.LATB7
#define LED_PORT                 PORTBbits.RB7
#define LED_WPU                  WPUBbits.WPUB7
#define LED_OD                   ODCONBbits.ODB7
#define LED_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LED_GetValue()           PORTBbits.RB7
#define LED_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)

// get/set MOTOR aliases
#define MOTOR_TRIS                 TRISCbits.TRISC6
#define MOTOR_LAT                  LATCbits.LATC6
#define MOTOR_PORT                 PORTCbits.RC6
#define MOTOR_WPU                  WPUCbits.WPUC6
#define MOTOR_OD                   ODCONCbits.ODC6
#define MOTOR_ANS                  ANSELCbits.ANSC6
#define MOTOR_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define MOTOR_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define MOTOR_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define MOTOR_GetValue()           PORTCbits.RC6
#define MOTOR_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define MOTOR_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define MOTOR_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define MOTOR_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define MOTOR_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define MOTOR_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define MOTOR_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define MOTOR_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SOUND aliases
#define SOUND_TRIS                 TRISCbits.TRISC7
#define SOUND_LAT                  LATCbits.LATC7
#define SOUND_PORT                 PORTCbits.RC7
#define SOUND_WPU                  WPUCbits.WPUC7
#define SOUND_OD                   ODCONCbits.ODC7
#define SOUND_ANS                  ANSELCbits.ANSC7
#define SOUND_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SOUND_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SOUND_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SOUND_GetValue()           PORTCbits.RC7
#define SOUND_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SOUND_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SOUND_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SOUND_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SOUND_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define SOUND_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define SOUND_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SOUND_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/