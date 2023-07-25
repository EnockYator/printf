#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/* printf.c prototype*/
int _printf(const char *, ...);
static void handle_output(char specifier, va_list args);

/* utils.c prototypes*/
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

#endif
