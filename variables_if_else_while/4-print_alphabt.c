#include <stdio.h>
/**
* main - Entry poit
*
* return (0);
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar (letter);
}
letter++;
}
putchar ('\n');
return (0);
}
