#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * print_last_digit - main func
 * Return: Always 0 (Success)
 * @n: The character to print
 *
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	_putchar(last_digit);
	return (last_digit);
}
