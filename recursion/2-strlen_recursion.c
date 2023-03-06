#include "main.h"
#include <stdio.h>
/*
 *
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if(s[i] == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}		
