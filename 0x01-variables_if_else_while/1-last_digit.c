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
printf("Last digit of %d is ", n);
if ((n % 10) > 5)
{
printf("%d is greater than 5\n", (n % 10));
}
else if ((n % 10) == 0)
{
printf("%d is zero\n", (n % 10));
}
else
{
printf("%d and is less than 6 and not 0\n", (n % 10));
}
return (0);
}
