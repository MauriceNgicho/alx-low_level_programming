#include <stdio.h>

/**
 * pre_main - function to be executed before main
 *
 * Description: This function prints a message before the
 * main function is executed.
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
