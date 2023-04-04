#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers
* @a: pointer to the first element of the matrix
* @size: size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - i - 1));
}
if (sum1 > 9)
{
_putchar(sum1 / 10 + '0');
}
_putchar(sum1 % 10 + '0');
_putchar(',');
_putchar(' ');
if (sum2 > 9)
{
_putchar(sum2 / 10 + '0');
}
_ putchar(sum2 % 10 + '0');
_putchar('\n');
}
