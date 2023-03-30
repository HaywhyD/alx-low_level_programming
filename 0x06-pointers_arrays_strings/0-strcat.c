#include "main.h"
#include <stddef.h>
/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
size_t dest_len = 0;
size_t i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
