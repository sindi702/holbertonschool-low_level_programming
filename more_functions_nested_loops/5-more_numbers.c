#include <unistd.h>
#include "main.h"
/**
 * void more_numbers - main function
 * Return: 1 if uppercase and 0 if false
 */
void more_numbers(void)
{
	int i;
	int j;

	for ( i = 0; i <= 9; i++)
	{
		if ( j >= 14 )
		  _putchar( j / 10 + '0');
		_putchar( j % 10 + '0');
	}
	_putchar('\n');
}
