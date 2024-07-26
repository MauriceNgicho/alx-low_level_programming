#include "array_iterator.h"
/**
 * array_iterator - executes a function given on each element
 * @array: The array to iterate over
 * @size: size of the array.
 * @action: pointer to the function used.
 *
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
