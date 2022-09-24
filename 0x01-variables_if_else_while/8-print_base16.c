#include <stdio.h>

/**
*  main - print digit nos of base 16
*
*  Return: Always (Success)
*/

int main(void)
{
int i;

for (i = '0'; i <= '15'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
