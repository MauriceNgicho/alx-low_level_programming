#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to be updated
 * @to: pointer to the char value to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
