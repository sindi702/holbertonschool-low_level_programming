#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - main function
 * @s: param
 * @accept: param
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *a_ptr;
	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
		for (a_ptr = accept; *a_ptr != '\0'; a_ptr++)
		{
			if (*s_ptr == *a_ptr)
			{
				 return s_ptr;
			}
		}
	}
	return NULL;
}
