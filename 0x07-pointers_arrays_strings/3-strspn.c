#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to be searched
* @accept: pointer to the string containing the character
*
* Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
{
return (n);
}
}
return (n);
}
