#include "main.h"
/**
 * _strspn - Entry point
 * @s: input1
 * @accept: input1
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n1 = 0;
	int r1;


	while (*s)
	{
		for (r1 = 0; accept[r1]; r1++)
		{
			if (*s == accept[r1])
			{
				n1++;
				break;
			}
			else if (accept[r1 + 1] == '\0')
				return (n1);
		}
		r1++;
	}
	return (n1);
}
