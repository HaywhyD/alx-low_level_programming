#include "main.h"
#include <stddef.h>
/**
* _strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to be used from src.
* Return: Pointer to the resulting string dest.*
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
/* Add the null terminator to the end of dest */
dest[dest_len + i] = '\0';
return (dest);
}
