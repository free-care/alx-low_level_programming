#include <stdio.h>

/**
*  main - print digit nos of base 10
*
*  Return: Always (Success)
*/

int main(void)
{
int i;
char c = '0';

printf("%c", c);
for (i = 1; i % 10; i++)
{
printf("%d", i);
}
printf("\n");
return (0);
}
