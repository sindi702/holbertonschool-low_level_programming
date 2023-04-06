#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  * binary_to_uint - convert binary to unsigned int
 *   * @b: binary number to convert
 *    * Return: unsigned int
 *     */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 1;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
		if (b[i] == '1')
			i += j;
		
		i *= 2;
		return (value);
}
