#include "main.h"
/**
* print_diagonal - Draws a diagonal line on the terminal.
* @n: Number of times the character \ should be printed.
* Description: Uses putchar to print a diagonal line using the \ character.
* If n is 0 or less, only prints a newline.
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
