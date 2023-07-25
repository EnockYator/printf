#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/* utils.c prototypes*/
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c prototype*/
int _printf(const char *, ...);

/* handler.c prototypes*/
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* specific specifiers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c prototypes*/
int _putchar(char);
int buffer(char);

/**
 * struct _format - struct
 * @type: Format
 * @f: function
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
