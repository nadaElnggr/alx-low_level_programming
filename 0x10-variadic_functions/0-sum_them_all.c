#include "variadic_functions.h"

/**
 * sum_them_all - sums all got number
 * @n:number of sent args
 * @...:sent integers
 *
 * Return: the summed int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int sum = 0;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i)
	{
		sum += va_arg(args, int);
		i -= 1;
	}
	va_end(args);
	return (sum);
}
