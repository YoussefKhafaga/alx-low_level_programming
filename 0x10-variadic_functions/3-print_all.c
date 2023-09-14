#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints all
 * @formt: format
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':

				if (j)
				{
					printf(", ");
				}
				j = 1;
				printf("%c", va_arg(ap, int));
				break;

			case 'i':
				if (j)
				{
					printf(", ");
				}
				j = 1;
				printf("%i", va_arg(ap, int));
				break;

			case 'f':
				if (j)
				{
					printf(", ");
				}
				j = 1;
				printf("%f", va_arg(ap, double));
				break;

			case 's':
				if (j)
				{
					printf(", ");
				}
				j = 1;
				str = va_arg(ap, char *);
				if (str)
				{
					printf("%s", str);
				}
				else
				{
					printf("(nil)");
				}
				break;
		}

		j++;
	}
	printf("\n");
	va_end(ap);
}

