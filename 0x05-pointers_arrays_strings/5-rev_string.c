#include "main.h"
#include <stdio.h>
/**
* rev_string - Prints a string in reverse, followed by a new line.
*
* @s: Pointer to the string to be printed in reverse.
*/
void rev_string(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
while (len > 0)
{
s--;
len--;
}
}
