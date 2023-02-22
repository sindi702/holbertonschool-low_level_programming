#include "main.h"
/**
 * _abs - main func
 *   * Return: Always 0 (Success)
 *    * @n: The character to print
 */
int _abs(int n)
{
if (n > 0)
{
	return (n);
}
else if (n < 0)
{
	return (n * -1);
}
else
{
	return(0);
}
}
