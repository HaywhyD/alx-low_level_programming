#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _islower - prints lowercase characters
*
* c - integer parameter
*
* Return: Always 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
