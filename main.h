#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1



/* printf.c prototype*/
int _printf(const char *, ...);
static void handle_output(char specifier, va_list args);

/* utils.c prototypes*/
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);



















#endif
