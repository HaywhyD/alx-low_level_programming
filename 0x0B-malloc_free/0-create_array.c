#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array
* @size: size of array
* @c: character to initialize array
*
* Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
/* Check for invalid input */
if (size == 0)
{
return (NULL);
}
/* Allocate memory for the array */
char *array = malloc(size * sizeof(char));
/* Check if memory allocation was successful */
if (array == NULL)
{
return (NULL);
}
/* Initialize the array with the given char */
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
/* Return a pointer to the array */
return (array);
}
