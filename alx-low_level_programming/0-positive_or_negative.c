#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("$n: is positive");
}
if (n == 0)
{
printf("$n: is zero\n");
}
if (n < 0)
{
printf("$n: is negative\n");
}
return (0);
}
