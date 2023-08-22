#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int handleReversedString(va_list args);
int my_putchar(char c);
int _printf(const char *format, ...);
int handleString(va_list args);
int handleChar(va_list args);

#endif
