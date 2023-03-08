#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	        return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
