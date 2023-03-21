#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints the lowercase alphabet followed by a new line
*/
void print_alphabet_x10(void)
{
char c;
for (int i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
