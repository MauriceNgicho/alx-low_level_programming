#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of single-digit numbers
 * using only the putchar function (four times maximum).
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}
