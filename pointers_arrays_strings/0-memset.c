#include "main.h"
/**
 * _memcpy - main function
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
