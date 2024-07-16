#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory which contains
 *	the contents of s1, followed by the contents of s2,
 *	and null terminated.
 *	Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Handle NULL inputs by treating them as empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* calculate the length of s1 and s2 */
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	/* Allocate memory for the concatenated string */
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	/* copy s1 into the new memory */
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	/* copy s2 into the new memory */
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}
	/* Add the null terminator */
	concat[i] = '\0';
	return (concat);
}
