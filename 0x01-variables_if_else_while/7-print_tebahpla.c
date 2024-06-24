#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets in lowercase
 * from 'z' to 'a'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
