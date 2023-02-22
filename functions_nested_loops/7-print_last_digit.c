#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - main func
 * Return: Always 0 (Success)
 * @num: The character to print
 *
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	else
	{
		last_digit = last_digit;
	}
	_putchar ('0' + last_digit);
	return (last_digit);
}
