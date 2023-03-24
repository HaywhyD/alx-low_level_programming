#include "main.h"
#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int num1 = 1;
int num2 = 2;
int temp;
int count = 2;
putchar('1');
putchar(',');
putchar(' ');
putchar('2');
putchar(',');
putchar(' ');
for (i = 3; i <= 50; i++)
{
temp = num1 + num2;
num1 = num2;
num2 = temp;
count++;
printf("%d", temp);
if (count != 50)
{
putchar(',');
putchar(' ');
}
}												    }
putchar('\n');
return (0);
}
