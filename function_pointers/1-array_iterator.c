#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints a name as is
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
