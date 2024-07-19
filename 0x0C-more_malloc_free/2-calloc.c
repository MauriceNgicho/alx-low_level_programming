#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* if nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* calculate the total size to allocate */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);

	/* If malloc fails, return NULL */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Initialize allocate memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
