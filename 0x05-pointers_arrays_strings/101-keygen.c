#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main - Generates random passwords for 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
int i, sum, diff, n;
char c;
srand(time(NULL));
sum = 0;
i = 0;
while (sum < 2772 - 122)
{
n = rand() % 62;
if (n < 26)
{
c = 'A' + n;
}
else if (n < 52)
{
c = 'a' + n - 26;
}
else
{
c = '0' + n - 52;
}
putchar(c);
sum += c;
i++;
}
diff = 2772 - sum;
if (diff > 0 && diff < 26)
{
putchar('A' + diff - 1);
}
else if (diff >= 26 && diff < 52)
{
putchar('a' + diff - 26 - 1);
}
else if (diff >= 52 && diff < 62)
{
putchar('0' + diff - 52 - 1);
}
printf("\n");
return (0);
}
