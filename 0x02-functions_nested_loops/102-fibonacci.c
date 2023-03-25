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
int n;
int a, b;
int c;
n = 50;
a = 1,
b = 2;
printf("%d, %d", a, b);
for (i = 2; i < n; i++)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
