#include "main.h"

int main(void)
{
	int result;


	result = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');

	result = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');

	result = print_sign(-45);
	_putchar(',');
	_putchar(' ');
	_putchar(result + '0');
	_putchar('\n');

	return (0);
}
