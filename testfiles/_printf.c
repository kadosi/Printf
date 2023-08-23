#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Printf function
 * @format: format
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
					count += handleChar(args);
					break;

				case 's':
					count += handleString(args);
					break;

				case 'r':
					count += handleReversedString(args);
					break;

				case 'd':
				case 'i':
					count += handleDecimal(args);
					break;

				case '%':
					my_putchar('%');
					count++;
					break;

				default:
					my_putchar('%');
					my_putchar(format[i]);
					count += 2;
					break;
			}
		}
		else
		{
			my_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
