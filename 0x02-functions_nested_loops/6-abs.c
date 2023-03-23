#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _abs - prints lowercase characters
*
* @num: integer parameter
*
* Return: Always 0 or 1
*/
int _abs(int num)
{
if (num < 0)
{
return (-num);
}
else
{
return (num);
}
}
