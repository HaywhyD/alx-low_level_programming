#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: the number of arguments
* @av: the arguments
*
* Return: a pointer to the concatenated string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
int index = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[index++] = av[i][j];
}
str[index++] = '\n';
}
str[index] = '\0';
return (str);
}
