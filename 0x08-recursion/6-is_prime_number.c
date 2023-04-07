#include "main.h"
#include <math.h>
/**
* is_prime_number - Checks if an input integer is a prime number or not
* @n: The number to check
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime_number(int n)
{
/* edge case: n is less than 2, which is not a prime number */
if (n < 2)
{
return (0);
}   
return (check_prime(n, 2)); /* call helper function to check if n is prime */
}

/**
* check_prime - A helper function to check if a number is prime or not
* @n: The number to check
* @i: The divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/

int check_prime(int n, int i)
{
/* base case: n is divisible by i, which means it's not prime */
if (n % i == 0)
{
return (0);
}
/* base case: i is greater than the square root of n, which means n is prime */
else if (i > sqrt(n))
{
return (1);
}
else /* recursive case: check if n is divisible by the next divisor */
{
return (check_prime(n, i + 1));
}
}
