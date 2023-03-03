#include "main.h"
/**
 * _memset - main function
 * @dest: param
 * @s: param
 * @n: param
 * @b: param
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
