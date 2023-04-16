#include "main.h"
/**
 * _strchr - Entry point
 * @s: input1
 * @c: input2
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int itr = 0;


	for (; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
			return (&s[itr]);
	}
	return (0);
}
