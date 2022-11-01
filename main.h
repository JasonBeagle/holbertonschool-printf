#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * #include <stdlib.h>
 * #include <limits.h>
 */

int _printf(const char *format, ...);

int _putchar(char c);

int spec_c(va_list c);

int spec_s(va_list s);

int spec_id(va_list id);

typedef struct printformat
{
	char *spec;
	int (*f)(va_list);
} format_spec;

#endif
