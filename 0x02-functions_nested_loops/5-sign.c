#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_sign - prints lowercase characters
*
* @n: integer parameter
*
* Return: Always 0 or 1
*/
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else if (n < 0)
{
printf("-1");
return -1;
}
}
