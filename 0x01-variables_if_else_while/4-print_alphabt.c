#include <stdio.h>
#include <ctype.h>

/**
*  main - putchar tolower case alphabet
*
*  Return: Always (Success)
*/

int main(void)
{
char c, d, e;

c = 'A';
while (c < 'E')
{
putchar(tolower(c));
c++;
}
d = 'F';
while (d < 'Q')
{
putchar(tolower(d));
d++;
}
e = 'R';
while (e <= 'Z')
{
putchar(tolower(e));
e++;
}

putchar('\n');
return (0);
}
