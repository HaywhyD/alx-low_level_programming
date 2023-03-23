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
if (n <= 98 && n >= 0)
{
for (i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar(i % 10 + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i >= 100)
{
_putchar(i / 100 + '0');
}
_putchar(i / 10 % 10 + '0');
_putchar(i % 10 + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
else
{
int _abs = _abs64(n);
for (i = _abs; i >= 0; i--)
{
if (i != 0)
{
_putchar('-');
}
if (i < 10)
{
_putchar(i % 10 + '0');
}
else
{
if (i >= 100)
{
_putchar(i / 100 + '0');
}
_putchar(i / 10 % 10 + '0');
_putchar(i % 10 + '0');
}
_putchar(',');
_putchar(' ');
}
for (i = 1; i <= 98; i++)
{
if (i < 10)
{
_putchar(i % 10 + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
