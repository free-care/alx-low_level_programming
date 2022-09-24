#include <stdio.h>

/**
*  main - print digit nos of base 10
*
*  Return: Always (Success)
*/

int main(void)
{
int i;

for (i = 0; i % 10; i++)
{
printf("%d\n", i);
}
return (0);
}
