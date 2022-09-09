#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	x = '0';
	while (x < '9')
	{
	y = x + 1;
	while (y < '9')
	{
	putchar(x);
	putchar(y);
	if(x != 9 && y != 8)
	{
	putchar(',');
	putchar(' ');
	}
	y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}

