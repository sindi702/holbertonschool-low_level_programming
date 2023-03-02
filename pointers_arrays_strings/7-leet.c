#include "main.h"
/**
 * leet - main function
 * Return: returns sum
 * @s: param
 */
char *leet(char *s)
{
	int i, j;
	char lett[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
