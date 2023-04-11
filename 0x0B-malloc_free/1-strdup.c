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
/* Check for NULL input */
if (str == NULL)
{
return (NULL);
}
/* Allocate memory for the new string */
new_str = malloc((strlen(str) + 1) * sizeof(char));
/* Check if memory allocation was successful */
if (new_str == NULL)
{
return (NULL);
}
/* Copy the string into the new memory location */
strcpy(new_str, str);
/* Return a pointer to the new string */
return (new_str);
}
