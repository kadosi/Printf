#include "main.h"

/**
 * handleChar - Prints an argument based on its type
 * @args: the variable argument list.
 * Return: 1 succession
 */

int handleChar(va_list args)
{
	int ch = va_arg(args, int);

	my_putchar(ch);
	return (1);
}

