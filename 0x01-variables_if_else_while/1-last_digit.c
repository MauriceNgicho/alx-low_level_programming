#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number
 * and check is its greater than 5, equal to 0
 * or less than 6 and not 0.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10; /* Get last digit of n. */
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
