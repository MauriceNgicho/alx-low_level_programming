#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to check.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (n-- && *src != '\0')
	{
	*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

/**
 * _strncpy - Copies up to n bytes of a string.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
