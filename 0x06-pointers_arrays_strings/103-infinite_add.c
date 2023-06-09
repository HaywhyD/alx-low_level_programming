#include "main.h"
/**
* infinite_add - Adds two numbers represented as strings
* @n1: First number string
* @n2: Second number string
* @r: Buffer to store the result
* @size_r: Size of the buffer
*
* Return: Pointer to the result string, or 0 if result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry = 0, sum = 0;
for (i = 0; n1[i] != '\0'; i++);
for (j = 0; n2[j] != '\0'; j++);
if (i > size_r || j > size_r)
{
return (0);
}
r[size_r] = '\0';
i--;
j--;
size_r--;
for (; i >= 0 || j >= 0; i--, j--, size_r--)
{
sum = carry;
if (i >= 0)
{
sum += n1[i] - '0';
}
if (j >= 0)
{
sum += n2[j] - '0';
}
carry = sum / 10;
r[size_r] = (sum % 10) + '0';
i--;
j--;
size_r--;
}
if (carry != 0)
{
return (0);
}
return (r + size_r + 1);
}
