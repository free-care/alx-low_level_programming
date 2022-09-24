#include <stdio.h>

/**
*  main - print digit nos of base 10
*
*  Return: Always (Success)
*/

int main(void)
{
char c;

c = '0';
while(c % '10')
{
    putchar(c);
    c++;
}
putchar("\n");
return (0);
}
