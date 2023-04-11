#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to duplicate
*
* Return: Pointer to duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *new_str;
int i, r = 0;
/* Check for NULL input */
if (str == NULL)
{
return (NULL);
}
i = 0;
while(str[i] != '\0')
{
i++;
}
new_str = malloc((i + 1) * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (r = 0; str[r]; r++)
{
new_str[r] = str[r];
}
return (new_str);
}
