#include "main.h"
#include <stdio.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to the string to be searched
* @accept: pointer to the string containing the characters to search for
*
* Return: a pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
{
return (s);
}
ptr++;
}
s++;
}
return (NULL);
}
