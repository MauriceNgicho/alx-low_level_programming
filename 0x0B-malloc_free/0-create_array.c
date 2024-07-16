#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 *	and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/*return NULL if size is 0*/
	if (size == 0)
	{
		return (NULL);
	}
	/*mem allocation for array*/
	array = malloc(size * sizeof(char));

	/*chack if malloc failed*/
	if (array == NULL)
	{
		return (NULL);
	}
	/*initialize the array with the specified character*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/*return pointer to array*/
	return (array);
}
