#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
	if (x == 'e' ||  x == 'q')
	x++;
	else
	{
	putchar(x);
	x++;
	}
	}
	putchar('\n');
	return (0);
}

