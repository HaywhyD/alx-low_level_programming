#include "main.h"
#include <stdio.h>
/**
* _strstr - locates a substring
* @haystack: pointer to the string to be searched
* @needle: pointer to the substring to search for
*
* Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (!*needle)
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}
return (NULL);
}
