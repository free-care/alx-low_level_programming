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
while (c < 'Z')
{
if (c != 'E' && c != 'Q')
putchar(tolower(c));
c++;
}

putchar('\n');
return (0);
}
