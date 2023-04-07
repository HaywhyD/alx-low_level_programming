#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
*
* Return: The square root of n, or -1 if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
if (n < 0) /* error check: n should be non-negative */
{
return (-1);
}
return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - A helper function
* @n: The number to find the square root of
* @guess: The initial guess for the square root of n
*
* Return: The square root of n, or -1
*/

int _sqrt_helper(int n, int guess)
{
if (guess * guess == n) /* base case: square root of n is found */
{
return (guess);
}
if (guess * guess > n) /* base case: square root of n is not a whole number */
{
return (-1);
}
return (_sqrt_helper(n, guess + 1));
}
