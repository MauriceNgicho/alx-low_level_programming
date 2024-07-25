#include <stdio.h>
#include "main.h"
#include <stddef.h>
/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a string and returns void.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
