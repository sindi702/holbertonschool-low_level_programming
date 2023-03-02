#include "main.h"
#include <string.h>
/**
 * string_toupper - main function
 * Return: returns sum
 * @string: param
 *
 */
char *string_toupper(char *s)
{
	int i;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i <= 'b'])
			string[i] -= 32;
	}
	return (string);
}
