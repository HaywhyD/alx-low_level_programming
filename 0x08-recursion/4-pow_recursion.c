#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to the power of y
* @x: The base number
* @y: The exponent
*
* Return: The result of x raised to the power of y, or -1 if y is less than 0
*/

int _pow_recursion(int x, int y)
{
if (y < 0) /* error check: y should be non-negative */
{
return (-1);
}
else if (y == 0) /* base case: x^0 is 1 */
{
return (1);
}
else /* recursive case: calculate x^y */
{
return (x * _pow_recursion(x, y - 1));
}
}
