#include "main.h"

/* Function prototype for the helper function */
int is_prime_helper(int n, int i);

/**
 * is_prime_number - Returns 1 if the input.
 * integer is a prime number, otherwise 0.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to determine if a number is prime.
 * @n: The number to check for primality.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
