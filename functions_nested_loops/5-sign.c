#include "main.h"
/**
 * print_sign - main func
 * Return: Always 0 (Success)
 * @n: The character to print
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n == 0)
{
	_putchar (48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
return (0);
n++;
}
