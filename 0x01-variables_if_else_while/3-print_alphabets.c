#include <stdio.h>
#include <ctype.h>

/**
*  main - putchar tolower case alphabet
*
*  Return: Always (Success)
*/

int main(void)
{
char c,e;

c = 'A';
while (c <= 'Z')
{
putchar(tolower(c));
c++;
}
e = 'A';
while (e <= 'Z')
{
putchar(e);
e++;
}

putchar('\n');
return (0);
}
