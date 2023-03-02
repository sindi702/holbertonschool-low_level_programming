#include "main.h"
/**
 * string_toupper - main function
 * Return: returns sum
 * @s: param
 *
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i <= 'b'])
			s[i] -= 32;
	}
	return (s);
}
