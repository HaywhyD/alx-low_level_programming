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
for (c = 0; c < 16; c++)
{
if (c < 10)
{
putchar(c + 48);
}
else
{
putchar(c + 87);
}
}
putchar('\n');
return (0);
}
