#include "main.h"
/**
 * handleReversedString - Prints an argument based on its type
 * @args: the variable argument list.
 * Return: The length of str
 */
int handleReversedString(va_list args)
{
	char *str = va_arg(args, char*);
	int length = strlen(str);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		my_putchar(str[i]);
	}
	return (length);
}
