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
int  c;
for (c = 0; c < 10; c++)
{
putchar(c + 48);
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
