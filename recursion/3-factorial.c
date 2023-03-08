#include "main.h"
#include <stdio.h>
/*
 * factorial - writes the character c to stdout
 * @n: The character to print
 * Return: strlen value
 */
int factorial(int n)
{
	if(n < 0)
	{
		return(-1);
	}
	else if( n <= 1)
		return(1);
	else
		return (n * factorial(n -1));
}
