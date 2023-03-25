#include "main.h"
/**
* print_line - prints a line of underscores to the terminal
* @n: number of times the character _ should be printed
*
* Return: void
*/
void print_line(int n)
{
if (n <= 0) {
putchar('\n');
return;
}
for (int i = 0; i < n; i++) {
putchar('_');
}
putchar('\n');
}
