#include <stdio.h>
#include "main.h"
/**
* puts2 - Prints every other with the first character,
*         followed by a new line.
*
* @str: The string to print.
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
