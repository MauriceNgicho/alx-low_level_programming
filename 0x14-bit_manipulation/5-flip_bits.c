#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits to flip
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m; /* gives xor result */
	unsigned int count = 0;

	while (num)
	{
		count += num & 1; /* checks last significant bit */
		num >>= 1; /* right shift to check next bit */
	}

	return (count);
}
