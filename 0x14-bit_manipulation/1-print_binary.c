#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit, begin = 0;

	for (bit = sizeof(n) * 8 - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			putchar('1');
			begin = 1;
		}
		else if (begin)
		{
			putchar('0');
		}
	}

	if (!begin)
		putchar('0');
}
