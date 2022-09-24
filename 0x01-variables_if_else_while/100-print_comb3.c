#include <stdio.h>

/**
*  main - print digit nos of base 16
*
*  Return: Always (Success)
*/

int main(void)
{
int n, i;

for (n = '0'; n < '9'; n++)
{
for (i = '1'; i <= '9'; i++)
{
    if (n != i || n > i)
{
    if (n < i)
{
putchar(n);
putchar(i);
    if (n != '8' || i != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
