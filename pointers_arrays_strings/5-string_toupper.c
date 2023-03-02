#include "main.h"
#include <string.h>
/**
 *
 *
 */
char *string_toupper(char *)
{
	char p = str;
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
		p++;
		return (str);
	}
