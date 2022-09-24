#include <stdio.h>
#include <ctype.h>

/**
*  main - putchar tolower case alphabet
*
*  Return: Always (Success)
*/

int main(void)
{
char c;

c = 'A';
while (c <= 'Z')
{
putchar(tolower(c));
c++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
