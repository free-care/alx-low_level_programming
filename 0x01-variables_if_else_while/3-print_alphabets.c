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

for (c = 'A'; c <= 'Z'; c++)
putchar(tolower(c), toupper(c));

putchar('\n');
return (0);
}
