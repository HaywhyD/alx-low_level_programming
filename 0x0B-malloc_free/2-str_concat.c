#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: Pointer to the newly allocated space in memory containing the
* concatenated strings, or NULL if it fails.
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i;
unsigned int s2_len = 0;
unsigned int s1_len = 0;
char *concat_str;
if (s1 != NULL)
{
while (s1[s1_len] != '\0')
{
s1_len++;
}
}
if (s2 != NULL)
{
while (s2[s2_len] != '\0')
{
s2_len++;
}
}
concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
if (concat_str == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
concat_str[i] = s1[i];
}
for (i = 0; i < s2_len; i++)
{
concat_str[s1_len + i] = s2[i];
}
concat_str[s1_len + s2_len] = '\0';
return (concat_str);
}

