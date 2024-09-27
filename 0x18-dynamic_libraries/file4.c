#include "main.h"
#include <stddef.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute.
 *
 * Return: Absolute value of n.
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (sign * num);
}

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference between s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
