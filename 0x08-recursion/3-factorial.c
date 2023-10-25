#include "main.h"
/**
* factorial - Returns the factorial of a number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of the number. If n is less than 0, returns -1.
*/
int factorial(int n)
{
if (n < 0) // Error case: if n is negative
	return (-1);
else if (n == 0) // Base case: if n is 0, factorial is 1
	return (1);
else
	return (n * factorial(n - 1)); // Recursively calculate the factorial
}
