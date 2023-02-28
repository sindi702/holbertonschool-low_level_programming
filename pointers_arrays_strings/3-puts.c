#include "main.h"
/**
 * _puts - main function
 * @str: parameter
 */
void _puts(char *str)
{ 
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
