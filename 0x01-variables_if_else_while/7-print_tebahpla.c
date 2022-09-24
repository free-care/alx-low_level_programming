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

for (c = 'Z'; c >= 'A'; c--)
putchar(tolower(c));

putchar('\n');
return (0);
}
