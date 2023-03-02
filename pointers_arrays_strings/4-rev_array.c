#include "main.h"
#include <stdio.h>
/**
  * reverse_array - main function
  * Return: returns sum
  * @a: param
  * @n: destination param
  */
void reverse_array(int *a, int n)
{
	int tmp , i;

	for(i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = tmp;	
	}
}
