#include "main.h"

/**
 * printBinary - Prints the binary representation of an unsigned integer
 * @num: Unsigned integer to be converted and printed
 *
 * This function takes an unsigned integer as input, converts it to its binary
 * representation, and then prints the binary,
 * string using the `printf` function.
 * Return: the number of characters printed.
 */
int printBinary(unsigned int num)
{
	int count = 0;
	int binary[32];
	int index = 0;

	if (num == 0)
	{
		my_putchar('0');

		return (1);
	}
	while (num > 0)
	{
		binary[index++] = num % 2;
		num /= 2;
	}
	for (int i = index - 1; i >= 0; i--)
	{
		my_putchar(binary[i] + '0');
		count++;
	}
	return (count);
}
