#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
int num = 0;
int sign = 1;
int i = 0;
while (s[i])
{
if (s[i] == '-')
{
sign *= -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + sign * (s[i] - '0');
}
if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
{
break;
}
i++;
}
return (num);
}
