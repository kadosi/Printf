#include "main.h"

/**
 * handleString - Handles the %s specifier
 * @args: Variable argument list
 * @buff: Buffer for string output
 * @buff_ind: Index to the buffer
 * Return: Number of characters printed
 */
int handleString(va_list args, char buff[], int *buff_ind)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count])
	{
		if (*buff_ind == 1024)
			print_buffer(buff, buff_ind);
		buff[(*buff_ind)++] = str[count++];
	}
	return (count);
}

