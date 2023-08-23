#include "main.h"
/**
 * handleDecimal - Prints an argument based on its type
 * @args: the variable argument list.
 * Return: The number of characters printed.
 */

int handleDecimal(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		my_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		my_putchar('0');
		count++;
	}
	else
	{
		int reverse = 0;

		while (num != 0)
		{
			reverse = reverse * 10 + (num % 10);
			num /= 10;
		}
		while (reverse != 0)
		{
			my_putchar((reverse % 10) + '0');
			count++;
			reverse /= 10;
		}
	}
	return (count);
}
