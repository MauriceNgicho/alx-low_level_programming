#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the charcter to check
 *
 * Return: 1 if c is a letter, lowercase of uppercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
