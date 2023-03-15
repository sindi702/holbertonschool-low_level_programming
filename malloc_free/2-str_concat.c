#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[j++] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		result[j++] = s2[i];

	return (result);
}
