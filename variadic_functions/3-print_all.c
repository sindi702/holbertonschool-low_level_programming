#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */

void print_char(va_list list)
{
	printf("%c" ,va_arg(list , int));
}
void print_int(va_list list)
{
	printf("%i" , va_arg(list , int));
}
void print_float(va_list list)
{
	printf("%f" , va_arg(list , double));
}
void print_string(va_list list)
{
	char *str ;
	str = va_arg(list , char*);
	if (str == NULL )
		printf("(nil)");
	printf("%s" , str);
}
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list arg_list;
	char *sep = "";
	print_t print_functions[] = {
		{"c" , print_char},
		{"i" , print_int},
		{"f" , print_float},
		{"s" , print_string}
	};

	va_start(arg_list , format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (print_functions[j].f_type != NULL)
			j++;
		if (j < 4)
		{
			printf("%s" , sep);
			print_functions[j].print(arg_list);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end (arg_list);
}


