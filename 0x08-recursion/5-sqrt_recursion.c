#include "main"
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
else if (n == 0 || n == 1) /* base case: square root of 0 or 1 is n itself */
{
return (n);
}
else /* recursive case: calculate square root of n */
{
int root = _sqrt_helper(n, n / 2);
return (root);
}
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
else if (guess == 0) /* base case: square root of n is not a whole number */
{
return (-1);
}
else /* recursive case: refine the guess for the square root of n */
{
return (_sqrt_helper(n, (n / guess + guess) / 2));
}
}
