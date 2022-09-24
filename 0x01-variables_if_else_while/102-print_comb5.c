#include <stdio.h>

/**
*  main - print digit nos of base 16
*
*  Return: Always (Success)
*/

int main(void)
{
    int n, i, j, k;

    for (n = '0'; n <= '9'; n++)
    {
        for (i = '0'; i <= '8'; i++)
        {
             for (j = '0'; j <= '9'; j++)
             {
                 for (k = '0'; k <= '9'; k++)
                 {
                     if ((n == i || n > i) < (j < k || j >= k))
                     {
                         putchar(n);
                         putchar(i);
                         putchar(' ');
                         putchar(j);
                         putchar(k);
                     }
                 }
             }
        }
    }
    putchar('\n');
    return (0);
}
