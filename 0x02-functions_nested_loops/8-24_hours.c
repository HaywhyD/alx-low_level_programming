#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints lowercase characters
*
* @void: integer parameter
*/
void jack_bauer(void)
{
int i, d, f, j;
for (i = 0; i <= 2; i++)
{
for (d = 0; d <= 9; d++)
{
for (f = 0; f <= 5; f++)
{
for (j = 0; j < 10; j++)
{
if ((i == 2) && (d >= 4 && d <= 9))
{
}
else
{
_putchar(i % 10 + '0');
_putchar(d % 10 + '0');
_putchar(':');
_putchar(f % 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
}
}
}
