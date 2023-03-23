#include "function_pointers.h"
/**
 * int_index - integer to find
 * @array: first parameter
 * @size: second parameter
 * @cmp: a pointer to the function to be used
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
