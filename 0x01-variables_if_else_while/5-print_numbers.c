#include <stdio.h>
#include <ctype.h>

/**
*  main - print digit nos of base 10
*
*  Return: Always (Success)
*/

int main(void)
{
int i;

i = 0;
while (i % 10)
{
printf(i);
i++;
}
printf("\n");
return (0);
}
