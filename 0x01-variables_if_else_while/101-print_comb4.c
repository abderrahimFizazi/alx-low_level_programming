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
	int z;

	x = '0';
	while (x <= '7')
	{
	y = x + 1;
	while (y <= '8')
	{
	z = y + 1;
	while (z <= '9')
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (x != '7' || y != '8' || z != '9')
	{
	putchar(',');
	putchar(' ');
	}
	z++;
	}
	y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}

