#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format specified.
 * @format: List of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char current;

	va_start(args, format);
	while (format && format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if (format[i + 1] && (current == 'c' || current == 'i' ||
			current == 'f' || current == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

