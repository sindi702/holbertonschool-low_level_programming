#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The character to print
 * Return: strlen value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
