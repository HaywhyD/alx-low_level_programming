#include "main.h"
#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int c;
int a = 1, b = 2;
putchar('1');
putchar(',');
putchar(' ');
putchar('2');
putchar(',');
putchar(' ');
for (i = 2; i < 50; i++)
{
c = a + b;
printf("%d", c);
if (i < 49)
{
putchar(',');
putchar(' ');
}
a = b;
b = c;
}
putchar('\n');
return 0;
}
