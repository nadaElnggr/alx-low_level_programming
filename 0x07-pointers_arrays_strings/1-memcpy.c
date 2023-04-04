#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: location where we copy to
 *@src: the block of string we copy from
 *@n: number of bytes to be copied
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n)
	{
		dest[i] = src[i];
		i = i + 1;
		n = n - 1;
	}
	return (dest);
}
