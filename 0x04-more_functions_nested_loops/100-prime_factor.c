#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long factor = 2;
	unsigned long largest = 0;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest = factor;
			while (n % factor == 0)
			{
				n /= factor;
			}
		}
		factor++;
	}

	printf("%lu\n", largest);
	return (0);
}
