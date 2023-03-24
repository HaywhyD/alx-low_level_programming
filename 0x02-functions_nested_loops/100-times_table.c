#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints lowercase characters
* @n: integer parameter
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;
if (product < 10)
{
if (j != 0)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(' ');
}
putchar(product + '0');
}
else if (product < 100)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(product / 10 + '0');
putchar(product % 10 + '0');
}
else
{
putchar(',');
putchar(' ');
putchar(product / 100 + '0');
putchar(product / 10 % 10 + '0');
putchar(product % 10 + '0');
}
}
putchar('\n');
}
}
