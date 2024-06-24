#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print base 16 numbers in lowercase
 * followed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
