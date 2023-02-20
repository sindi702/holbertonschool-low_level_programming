#include <stdio.h>
/**
* main - Entry poit
*
*
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
