#include "main.h"
/**
 * more_numbers - check the code.
*/
void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i < 10; j++)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
