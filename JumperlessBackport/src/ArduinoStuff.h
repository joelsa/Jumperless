// SPDX-License-Identifier: MIT
#ifndef ARDUINOSTUFF_H
#define ARDUINOSTUFF_H







extern char serial1message[300];
extern int serial1messageIndex;
extern volatile int serial1messageReady;


void initArduino(void);

void arduinoPrint(void);


void uploadArduino(void);


void setBaudRate(int baudRate);







#endif
