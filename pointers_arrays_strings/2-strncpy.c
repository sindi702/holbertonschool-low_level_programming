#include "main.h"
#include <string.h>
/**
 * _strchr - main function
 * @s: param
 * @c: param
 * Return: pnt
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
