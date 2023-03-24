#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  * print_char - function that prints a character
 *   * @list: list of arguments
 *    */
void print_char(va_list list)
{
	        printf("%c", va_arg(list, int));
}

/**
 *  * print_int - function that prints an integer
 *   * @list: list of arguments
 *    */
void print_int(va_list list)
{
	        printf("%d", va_arg(list, int));
}

/**
 *  * print_float - function that prints a float
 *   * @list: list of arguments
 *    */
void print_float(va_list list)
{
	        printf("%f", va_arg(list, double));
}

/**
 *  * print_string - function that prints a string
 *   * @list: list of arguments
 *    */
void print_string(va_list list)
{
	        char *str;

		        str = va_arg(list, char *);
			        if (str == NULL)
					                printf("(nil)");
				        else
						                printf("%s", str);
}

/**
 *  * print_all - function that prints anything
 *   * @format: list of types of arguments passed to the function
 *    * c: char
 *     * i: integer
 *      * f: float
 *       * s: char * (if the string is NULL, print (nil) instead)
 *        * any other char should be ignored
 *         */
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
															                {NULL, NULL}
									        };

						        va_start(arg_list, format);

							        while (format && format[i])
									        {
											                j = 0;
													                while (print_functions[j].f_type && format[i] != *print_functions[j].f_type)
																                        j++;
															                if (print_functions[j].f_type)
																		                {
																					                        printf("%s", sep);
																								                        print_functions[j].print(arg_list);
																											                        sep = ", ";
																														                }
																	                i++;
																			        }
								        printf("\n");
									        va_end(arg_list);
}
