#include "main.h"
/**
 * swap_int - main function
 * @a: The character to print
 * @b: The character to print
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
