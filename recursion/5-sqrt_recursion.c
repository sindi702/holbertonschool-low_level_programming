#include "main.h"
/**
 *
 *
 */
int find(int n ,int res)
{
	if(res * res == n)
	{
		return(res);
	}
	else if(res * res > n)
		return (-1);
	else
		return(find(n , res +1));
}
int _sqrt_recursion(int n)
{
	if(n == 1)
	{
		return (1);
	}
	else
		return(find(n ,0));
}	
