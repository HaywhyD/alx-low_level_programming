#include <stdio.h>
#include "main.h"
/**
* print_number - prints an integer
* @n: the integer to print
*/
void print_number(int n)
{
if (n < 0)
{
n = -1 * n;
_putchar('-');
_putchar(n / 10 + '0');
_putchar((n % 10) + '0');
}
else if (n < 100 && n >= 10)
{
_putchar(n / 10 + '0');
_putchar((n % 10) + '0');
}
else if (n < 10 && n > 0)
{
_putchar((n % 10) + '0');
}
else if (n > 999)
{
_putchar(n / 1000 + '0');
_putchar(n % 1000 / 100 + '0');
_putchar(n % 100 / 10 + '0');
_putchar((n % 10) + '0');
}
else if (n > 100 && n < 1000)
{
_putchar(n / 100 + '0');
_putchar(n % 100 / 10 + '0');
_putchar((n % 10) + '0');
}
}
