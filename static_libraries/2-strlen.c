#include "main.h"
/**
 * _strlen - main function
 * @s: param
 * Return: returns i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
