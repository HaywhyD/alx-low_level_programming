#include "main.h"
#include <stdlib.h>
/**
* strtow - Splits a string into words
* @str: The string to split
*
* Return: Pointer to an array of strings (words) or NULL if fails
*/
char **strtow(char *str)
{
char **words, *word;
int i, j, k, count = 0, len = 0;
if (str == NULL || *str == '\0')
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
count++;
}
}
if (count == 0)
{
return (NULL);
}
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
{
return (NULL);
}
for (i = 0, j = 0; str[i] && j < count; i++)
{
if (str[i] != ' ')
{
for (len = 0, k = i; str[k] != ' ' && str[k] != '\0'; k++)
{
len++;
}
word = malloc(sizeof(char) * (len + 1));
if (word == NULL)
{
while (--j >= 0)
{
free(words[j]);
}
free(words);
return (NULL);
}
for (k = 0; k < len; k++, i++)
{
word[k] = str[i];
}
word[k] = '\0';
words[j++] = word;
}
}
words[j] = NULL;
return (words);
}
