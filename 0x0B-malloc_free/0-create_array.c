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
unsigned int i;
char *array;
array = malloc(size * sizeof(char));
/* Check for invalid input */
if (size == 0 || array == NULL)
{
return (NULL);
}
/* Initialize the array with the given char */
for (i = 0; i < size; i++)
{
array[i] = c;
}
/* Return a pointer to the array */
return (array);
}
