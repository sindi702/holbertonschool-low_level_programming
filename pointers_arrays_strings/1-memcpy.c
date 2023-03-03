#include "main.h"
/**
 * _memcpy - main function
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		dest[i] = src[i];
	return(dest);
}
