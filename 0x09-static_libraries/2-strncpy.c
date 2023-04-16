#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input1 value
 * @src: input2 value
 * @n: input3 value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;


	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}


	return (dest);
}
