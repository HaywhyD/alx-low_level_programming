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
int len1, len2, sum, carry = 0, i, j;
/* Get lengths of the input strings */
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;
/* Check if result can fit in buffer */
if (len1 + len2 + 1 > size_r)
{
return (0);
}
/* Add digits from right to left */
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
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
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[i + j + 1] = sum + '0';
}
/* Add carry to the leftmost digit */
if (carry)
{
if (len1 + len2 + 1 == size_r)
{
return (0);
}
r[0] = '1';
r[len1 + len2] = '\0';
}
else
{
r[len1 + len2 + 1] = '\0';
}
/* Reverse the string */
for (i = 0, j = len1 + len2; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
