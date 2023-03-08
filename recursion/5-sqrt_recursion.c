#include "main.h"
/**
 * _sqrt_recursion - writes the character c to stdout
 * find - writes the character c to stdout
 * @n: param
 * @res: param
 * Return: strlen value
 * Return: res
 *
 */
int find(int n, int res)
{
	if (res * res == n)
	{
		return (res);
	}
	else if (res * res > n)
		return (-1);
	else
		return (find(n, res + 1));
}
/**
 * find - second function
 * @n: second param
 * @res: param
 * Return: res
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
		return (find(n, 0));
}
