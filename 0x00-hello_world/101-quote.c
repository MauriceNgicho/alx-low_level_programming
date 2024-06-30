#include <unistd.h>

/**
 * main - Entry point
 *
 * Description:"and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * followed by a new line, to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	
	write(2, message, 59);  /* 2 is the file descriptor for standard error */

	return (1);
}
