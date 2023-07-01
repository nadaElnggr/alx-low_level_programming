#include "lists.h"

/**
 * StringLength - for calculating string len
 * @s: sent string as parameter
 *
 * Return: string len
 *
 */
int StringLength(char *s)
{
	int i = 0;
	int j = 0;


	if (!s)
		return (0);
	while (s[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}


/**
 * print_list - prints the elements of the list
 * @h: pointer to the first node
 *
 * Return: size of list
 *
 */
size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("[%d] %s\n", StringLength(h->str) ? (h->str)  : "(nil)");
		h = h->next;
		i++;
	}
	return (index);
}
