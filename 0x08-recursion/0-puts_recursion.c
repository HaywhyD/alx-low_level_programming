#include "main.h"

/**
* _puts_recursion - Prints a string followed by a new line.
* @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') // Base case: if we reach the end of the string
{
_putchar('\n'); // Print a new line
return; // Return to the previous function call
}
_putchar(*s); // Print the current character
_puts_recursion(s + 1); // Recursively call _puts_recursion with the next character
}
