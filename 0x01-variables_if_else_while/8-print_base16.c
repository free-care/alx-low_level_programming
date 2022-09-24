#include <stdio.h>

/**
*  main - print digit nos of base 16
*
*  Return: Always (Success)
*/

int main(void)
{
int n, i;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
