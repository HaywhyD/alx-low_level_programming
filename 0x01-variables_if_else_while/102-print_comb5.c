#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * * main - Entry point of the program
 * *
 * * Return: Always 0
 * */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
int d1 = i / 10;
int d2 = i % 10;
int d3 = j / 10;
int d4 = j % 10;
putchar('0' + d1);
putchar('0' + d2);
putchar(' ');
putchar('0' + d3);
putchar('0' + d4);
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
