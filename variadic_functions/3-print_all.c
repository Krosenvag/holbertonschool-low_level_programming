#include "variadic_functions.h"

void print_all(const char * const format, ...)

{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str
	const char t_arg[] = 'cifs'

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;

