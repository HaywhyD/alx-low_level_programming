#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints lowercase characters
*
* @n: integer parameter
*/
void print_to_98(int n)
{
for (n = n; n <= 98; n++)
{
if (n < 10)
{
_putchar(n % 10 + '0');
}
else
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
