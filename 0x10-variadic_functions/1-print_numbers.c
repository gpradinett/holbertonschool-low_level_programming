#include "variadic_functions.h"
/**
* print_numbers - function that prints numbers followed by a new line
* @separator: pointer
* @n: number of integers passed to the function
* Return: return the Sum or 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		int valores;

		va_list parametros;

		va_start(parametros, n);
		for (i = 0; i < n; i++)
		{
		valores = va_arg(parametros, int);

		if (separator == NULL || i == 0)
			printf("%d", valores);
		else
			printf("%s%d", separator, valores);
	}
	va_end(parametros);
	printf("\n");
}
