#include "main.h"
/**
 * _memset - fill a block of memory with a desird sent value
 * @s: starting point of memory to be filled
 * @b: the wanted value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n)
	{
		s[i] = b;
		i = i + 1;
		n = n - 1;
	}
	return (s);
}
