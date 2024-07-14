#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;/*to avoid unused warning*/
	/*print program's name*/
	printf("%s\n", argv[0]);

	return (0);
}
