#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_output(*format, args);
		}
		else
		{
			putchar(*format);
		}
		format++;
		count++;
	}
	va_end(args);
	return (count);
}

/**
 *handle_output - handles the output
 *@specifier: format specifier
 *@args: arguments
 *Return: nothing
 */

static void handle_output(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
	{
		char ch = va_arg(args, int);

		putchar(ch);
		break;
	}
	case 's':
	{
		const char *str = va_arg(args, const char*);

		while (*str)
		{
			putchar(*str);
			str++;
		}
		break;
	}
	case '%':
		putchar('%');
		break;
	default:
		putchar(specifier);
		break;
	}
}
