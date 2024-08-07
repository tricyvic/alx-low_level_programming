#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - will Print the strings the a new line.
 * @separator: String printed between strings.
 * @n: no. of strings passed to the function.
 * @...: No. variable of strings to be printed.
 *
 * Description : Dont print if sseparator is null
 *              nill is printed if string ios null.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;


	va_start(strings, n);


	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

