#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);

int spec_c(va_list c);

int spec_s(va_list s);

int spec_id(va_list id);

#endif
