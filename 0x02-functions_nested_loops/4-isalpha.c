#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _isalpha - prints lowercase characters
*
* @c: integer parameter
*
* Return: Always 0 or 1
*/
int _isalpha(int c)
{
for (int i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
return (1);
}
}
for (int d = 'A'; d <= 'Z'; d++)
{
if (d == c)
{
return (0);
}
}
}
