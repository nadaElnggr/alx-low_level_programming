#include "main.h"
/**
 * _strspn - Entry point
 * @s: input1
 * @accept: input1
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i = i + 1)
		{
			if (*s == accept[i])
			{
				n = n + 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s = s + 1;
	}
	return (n);
}

