#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - function to print a char
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * print_int - function to print an int
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - function to print a float
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * print_str - function to print a string
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_str(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}


/**
 * print_all - function that prints anything
 * @format: argument
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int j = 0;
	int printed = 1;

	print tab[5] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_str},
	{NULL, NULL}
	};

	va_start(list, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (*tab[i].caract == format[j])
			{
				printf(", ");
				tab[i].f(list);
				printed++;
				break;
			}
			i++;
		}
		j++;
	}

	va_end(list);
	printf("\n");

}

