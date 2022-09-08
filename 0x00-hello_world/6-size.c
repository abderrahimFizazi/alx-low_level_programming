#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
long long int doubleType;
char charType;
long l;
long int li;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long: %zu byte\n", sizeof(l));
printf("Size of long int: %zu byte\n", sizeof(charType));
printf("Size of long long int: %zu bytes\n", sizeof(doubleType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
