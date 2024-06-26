#include "main.h"

int main(void)
{
	char test1 = 'a';
	char test2 = 'Z';
	char test3 = 'm';
	char test4 = 'H';


	_putchar(test1);
	_putchar(':');
	_putchar(' ');
	_putchar(_islower(test1) + '0');
	_putchar('\n');

	_putchar(test2);
	_putchar(':');
	_putchar(' ');
	_putchar(_islower(test2) + '0');
	_putchar('\n');

	_putchar(test3);
	_putchar(':');
	_putchar(' ');
	_putchar(_islower(test3) + '0');

	_putchar(test4);
	_putchar(':');
	_putchar(' ');
	_putchar(_islower(test4) + '0');
	_putchar('\n');

	return (0);
}
