#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#define PASSWORD_LENGTH 10

/**
* generate_random_char - generates a random character between '!' and '~' in the ASCII table
*
* Return: a random character between '!' and '~'
*/
char generate_random_char(void)
{
/** rand() % 94 generates a random integer between 0 and 93
*  Adding 33 shifts the range to '!' to '~'
*/
return (char)(rand() % 94 + 33);
}

/**
* main - entry point for the program
*
* Return: always 0
*/
int main(void)
{
int i;
char password[PASSWORD_LENGTH + 1];
/** Initializes the random number generator with the current time */
srand((unsigned int)time(NULL));
/** Generates a random password of length PASSWORD_LENGTH */
for (i = 0; i < PASSWORD_LENGTH; i++) {
password[i] = generate_random_char();
}
password[PASSWORD_LENGTH] = '\0';
/** Prints the generated password */
printf("Generated password: %s\n", password);
return (0);
}
