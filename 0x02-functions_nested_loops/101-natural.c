#include <stdio.h>
#include "main.h"
/**
* print_sum_of_multiples - prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: void
*/
int main()
{
int sum = 0;
for (int i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
int digits = 0;
for (int n = sum; n > 0; n /= 10)
{
digits++;
}
if (sum == 0)
{
putchar('0');
}
for (int i = digits - 1; i >= 0; i--)
{
int divisor = 1;
for (int j = 0; j < i; j++)
{
divisor *= 10;
}
int digit = (sum / divisor) % 10;
putchar(digit + '0');
}
putchar('\n');
return 0;
}
