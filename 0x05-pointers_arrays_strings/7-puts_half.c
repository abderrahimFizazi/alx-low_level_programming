#include <stdio.h>
/**
 * puts_half - reset argument to 98
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
  int i;

for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
printf("%c",str[i]);
}
printf("\n");
}
