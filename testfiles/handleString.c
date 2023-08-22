#include "main.h"
/**
 * handleString - Prints an argument based on its type
 * @args: the variable argument list.
 * Return: The number of characters printed.
 */

int handleString(va_list args)
{
	char *str = va_arg(args, char*);

	fputs(str, stdout);
	return (strlen(str));
}
