#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");
	return (0);
}
