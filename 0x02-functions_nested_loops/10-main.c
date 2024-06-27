#include "main.h"

int main(void)
{
	int result;

	result = add(5, 3);
	_putchar('5');
	_putchar(' ');
	_putchar('+');
	_putchar(' ');
	_putchar('3');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');

	result = add(-5, 3);
	_putchar('-');
	_putchar('5');
	_putchar(' ');
	_putchar('+');
	_putchar(' ');
	_putchar('3');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	if (result < 0)
	{
		_putchar('-');
		_putchar(-result + '0');
	}
	else
	{
		_putchar(result + '0');
	}
	_putchar('\n');

	return (0);
}
