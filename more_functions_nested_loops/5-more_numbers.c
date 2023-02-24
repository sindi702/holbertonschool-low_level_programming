#include <unistd.h>
#include "main.h"
/**
 * more_numbers - main function
 * Return: 1
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}
