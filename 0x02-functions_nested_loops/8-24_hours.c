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
int i,d,f,j;
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
