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
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
{
print_number(i);
putchar(',');
putchar(' ');
}
}
else
{
for (i = n; i > 98; i--)
{
print_number(i);
putchar(',');
putchar(' ');
}
}
print_number(98);
putchar('\n');
}
/**
* print_number - prints i number
* @n: integer parameter
*/
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n *= -1;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
putchar((n % 10) + '0');
}
