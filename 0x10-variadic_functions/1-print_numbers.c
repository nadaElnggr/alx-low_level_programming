#include "variadic_functions.h"

/**
 * print_numbers - prints the entered nums
 * @n: number of passed numbers
 * @...:passed numbers
 * @separator:sep to be sent
 *
 * Return:nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i)
	{
		printf("%d%s", va_arg(args, int), i ? (separator ? separator : "") : "\n");
		i = i - 1;
	}
	va_end(args);
}
