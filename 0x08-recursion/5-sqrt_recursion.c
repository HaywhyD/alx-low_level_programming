#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
*
* Return: The natural square root of the number. If n does not have a natural
* square root, returns -1.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
	return -1;
else if (n == 0 || n == 1)
	return (n);
else
	return (find_sqrt(n, 1));
}

/**
* find_sqrt - Helper function to find the square root using binary search.
* @n: The number for which to find the square root.
* @guess: The initial guess for the square root.
*
* Return: The natural square root of the number. If it does not have a natural
* square root, returns -1.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
	return (guess);
else if (guess * guess > n)
	return 	(-1);
else
	return (find_sqrt(n, guess + 1));
}
