#include "main.h"

int main(void)
{
	int n;

	n = -10;

	_putchar('1');
	_putchar('0');
	_putchar(' ');
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	_putchar(_abs(n) + '0');
	_putchar('\n');

	n = 0;
	_putchar('0');
	_putchar(' ');
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	_putchar(_abs(n) + '0');

	n = 0;
	_putchar('1');
	_putchar('0');
	_putchar(' ');
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	_putchar(_abs(n) + '0');
	_putchar('\n');

	return (0);
}
