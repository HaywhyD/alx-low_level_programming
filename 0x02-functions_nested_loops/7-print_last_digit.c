#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints lowercase characters
*
* @num: integer parameter
*
* Return: Always 0 or 1
*/
int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar('0' + last_digit);
return (last_digit);
}
