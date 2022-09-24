#include <stdio.h>

/**
*  main - prints all possible different combinations of three digits
*
*  Return: Always (Success)
*/

int main(void)
{
int n, i, j;

for (n = '0'; n <= '7'; n++)
{
for (i = '1'; i <= '8'; i++)
{
for (j = '2'; j <= '9'; j++)
if ((n != i && i != j) || (n > i && i > j))
{
if (n < i && i < j)
{
putchar(n);
putchar(i);
putchar(j);
if (n != '7' || i != '8' || j != '9')
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
