#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

void print_buffer(char buffer[], int *buff_ind);
void print_newline(void);

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
	char buffer[1024];
	int buff_ind = 0;

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
					count += handleString(args, buffer, &buff_ind);
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

				case 'n':
					print_newline();
					count++;
					break;

				case 'b':
					count += printBinary(va_arg(args, unsigned int));
					break;
				default:
					my_putchar('%');
					my_putchar(format[i]);
					count += 2;
					break;
			}
			continue;
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

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

/**
 * print_newline - prints a newline character
 */
void print_newline(void)
{
	write(1, "\n", 1);

}
