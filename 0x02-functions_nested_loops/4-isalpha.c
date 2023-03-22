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
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
