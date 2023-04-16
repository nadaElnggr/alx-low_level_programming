#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input1 value
 * @src: input2 value
 * @n: input3 value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index1;
	int index2;


	index1 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	index2 = 0;
	while (index2 < n && src[index2] != '\0')
	{
	dest[index1] = src[index2];
	index1++;
	index2++;
	}
	dest[index1] = '\0';
	return (dest);
}
