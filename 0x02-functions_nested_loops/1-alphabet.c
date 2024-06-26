#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses a loop to print all the letters
 * of the alphabet in lowercase, followed by a newline character.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
