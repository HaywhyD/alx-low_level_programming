#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string for which to determine the length.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') // Base case: if the current character is the null character
return 0;       
return 1 + _strlen_recursion(s + 1); // Recursively call _strlen_recursion with the next character and add 1 to the result
}
