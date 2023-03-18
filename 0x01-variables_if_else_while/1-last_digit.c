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
int last = n % 10;
printf("Last digit of %d is ", n);
if (last > 5)
{
printf("%d is greater than 5\n", last);
}
else if (last == 0)
{
printf("%d is zero\n", last);
}
else
{
printf("%d and is less than 6 and not 0\n", last);
}
return (0);
}
