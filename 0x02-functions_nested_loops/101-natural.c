#include <stdio.h>
#include "main.h"
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: void
*/
int main(void)
{
int sum;
int i, j, n;
int digits;
int divisor;
int digit;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
digits = 0;
for (n = sum; n > 0; n /= 10)
{
digits++;
}
if (sum == 0)
{
putchar('0');
}
for (i = digits - 1; i >= 0; i--)
{
divisor = 1;
for (j = 0; j < i; j++)
{
divisor *= 10;
}
digit = (sum / divisor) % 10;
putchar(digit + '0');
}
putchar('\n');
return (0);
}
