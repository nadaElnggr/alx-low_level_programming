#include "variadic_functions.h"

/**
 * print_strings - prints the entered nums
 * @n: number of passed numbers
 * @...:passed numbers
 * @separator:sep to be sent
 *
 * Return:nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        int i = n;
        va_list args;
	char *str;

        if (!n)
        {
                printf("\n");
                return;
        }
        va_start(args, n);
        while (i--)
        {
                printf("%s%s", (str = va_arg(args, char*)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
        }
        va_end(args);
}
