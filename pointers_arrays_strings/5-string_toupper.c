#include "main.h"
#include <string.h>
/**
 *
 *
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			 s[i] = toupper(s[i]);
		}
		i++;
	}
	return s;
}
