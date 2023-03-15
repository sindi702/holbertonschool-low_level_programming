#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _str_concat - create array function
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: ptr
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}
