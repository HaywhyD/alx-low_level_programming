#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
{
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
