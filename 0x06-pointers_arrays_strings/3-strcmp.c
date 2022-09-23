#include "main.h"
/**
 * _strcmp - find the length of a string
 * @s1: pointer to the string
 * @s2: pointer
 * Return: destination
 */
int _strcmp(char *s1, char *s2)
{
	int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] == s2[i])
	i++;
	else
	{
		return (s1[i] - s2[i]);
	}

}
return (0);
}
