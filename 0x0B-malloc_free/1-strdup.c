#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i;

	/*check if str is NULL*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*calculate length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}

	/*allocate memory for the new string*/
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	/*copy the string*/
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	/* add the null terminator*/
	dup[len] = '\0';

	return (dup);
}
