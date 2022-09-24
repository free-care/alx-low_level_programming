#include <stdio.h>

/**
*  main - print digit nos of base 10 separated with comma
*
*  Return: Always (Success)
*/

int main(void)
{
int n, i;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
