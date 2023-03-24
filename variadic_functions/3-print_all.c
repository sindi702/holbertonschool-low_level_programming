#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - cchar fun
 * @list: list of elem
 */
void print_char(va_list list)
{
	printf("%c" ,va_arg(list , int));
}
/**
 * print_int - int fun
 * @list: lists
 */
void print_int(va_list list)
{
	printf("%i" , va_arg(list , int));
}
/**
 * print_float - un of floats
 * @list: list
 */
void print_float(va_list list)
{
	printf("%f" , va_arg(list , double));
}
/**
 * print_string - main fun
 * @list: list
 */
void print_string(va_list list)
{
	char *str ;
	str = va_arg(list , char*);
	if (str == NULL )
		printf("(nil)");
	printf("%s" , str);
}
/**
 * print_all - print fun
 * @format: format type
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list arg_list;
	char *sep = "";
	print_t print_functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{0, NULL}
	};

	va_start(arg_list , format);

	while (format && format[i])
	{ 
		j = 0;
		while (print_functions[j].f_type && format[i] != print_functions[j].f_type)
			j++;
		if (print_functions[j].f_type)
		{
			printf("%s" , sep);
		u	print_functions[j].print(arg_list);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end (arg_list);
}
