#include <stdio.h>
#include "main.h"
/**
* print_sum_of_multiples - prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: void
*/
void print_sum_of_multiples(void)
{
int sum = 0;
or (int i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
int digits = 0;
int temp_sum = sum;
while (temp_sum > 0)
{
digits++;
temp_sum /= 10;
}
for (int i = digits; i > 0; i--)
{
int digit = sum / power_of_10(i - 1) % 10;
_putchar(digit + '0');
}
_putchar('\n');
}
/**
* power_of_10 - calculates the power of 10 for a given exponent
* @exponent: The exponent of the power of 10 to calculate
*
* Return: The power of 10 for the given exponent
*/
int power_of_10(int exponent)
{
int result = 1;
for (int i = 0; i < exponent; i++)
{
result *= 10;
}
return result;
}
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_sum_of_multiples();
return (0);
}
