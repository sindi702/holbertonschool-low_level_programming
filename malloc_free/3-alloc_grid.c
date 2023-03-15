#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - create array function
 * @width: string to concatenate
 * @height: string to concatenate
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	int **my_array;
	int i, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	my_array = malloc(sizeof(int *) * height);

	if (my_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		my_array[i] = malloc(sizeof(int) * width);
		if (my_array[i] == NULL)
		{
			while (i >= 0)
			{
				free(my_array[i]);
				i--;
			}
			free(my_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < height; k++)
			my_array[i][j] = 0;
	}
	return (my_array);
}
