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
for (int i = 0; i <= 2; i++)
{
for (int d = 0; d <= 9; d++)
{
for (int f = 0; f <= 5; f++)
{
for (int j = 0; j < 10; j++)
{
if ((i == 2) && (d >= 4 && d <= 9))
{
}
else
{
_putchar(i);
_putchar(d);
_putchar(':');
_putchar(f);
_putchar(j);
_putchar('\n');
}
}
}
}
}
}
