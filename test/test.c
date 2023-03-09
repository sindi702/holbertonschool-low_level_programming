#include "main.h"
int max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
int max_3(int a, int b, int c)
{
	int max_2;	
	if (a >= b)
		max_2 = a;
	else
		max_2 = b;
        if(max_2 >= c)
		return (max_2);
	return(c);
}
int sum(int n)
{
	int i;
	int s = 0;
	for(i = 1 ; i <= n ; i++)
		s = s + i;
	return(s);

}
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
