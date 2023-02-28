#include "main.h"
/**
 *  * _strlen - main function
 *   * @i: The character to print
 *    */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
