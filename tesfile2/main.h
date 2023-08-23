#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int printBinary(unsigned int num);
int handleDecimal(va_list args);
int handleReversedString(va_list args);
int my_putchar(char c);
int _printf(const char *format, ...);
int handleChar(va_list args);
int handleString(va_list args, char buff[], int *buff_ind);
void print_buffer(char buffer[], int *buff_ind);
#endif
