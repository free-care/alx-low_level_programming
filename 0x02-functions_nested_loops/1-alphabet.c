#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet in lower case
 *
 * Return: Always (Success)
 */

void print_alphabet(int i)
{

    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}
