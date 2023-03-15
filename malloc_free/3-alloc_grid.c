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
	int **ptr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (i = 0; i < height; i++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
