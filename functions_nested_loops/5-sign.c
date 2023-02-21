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
	return (1);
	_putchar(43);
}
else if (n == 0)
{
	return (0);
	_putchar (48);
}
else
{
	return (-1);
	_putchar(45);
	n++;
}
return (0);
}
