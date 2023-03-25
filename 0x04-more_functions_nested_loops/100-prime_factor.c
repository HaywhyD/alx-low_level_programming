#include <stdio.h>
#include "main.h"

/**
* main - finds and prints the largest prime factor of 612852475143
* Return: Always 0
*/
int main(void)
{
long n = 612852475143;
long largest_prime_factor = 2;
while (n > largest_prime_factor)
{
if (n % largest_prime_factor == 0)
{
n /= largest_prime_factor;
}
else
{
largest_prime_factor++;
}
}
printf("%ld\n", largest_prime_factor);
return (0);
}
