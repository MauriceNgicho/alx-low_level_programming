#include <stdio.h>

/**
 * main - prints the number of command-line arguments passed to the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;/*mark argv as unused*/
	printf("%d\n", argc - 1);
	return (0);
}
