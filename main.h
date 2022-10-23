#ifndef _PRINTF_
#define _PRINTF_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct flags
{
	int left_align;
	int padding_zero;
	int plus_sign;
	int space_plus;
} format_flags;

void _putchar(char);
int _printf(char *, ...);
int print_int(int);
int print_string(char *);
int compute(int state, char token);
int accept(int *state, va_list ap, char token);

#endif
