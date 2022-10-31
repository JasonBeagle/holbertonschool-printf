#include "test_header.h"

/**
 * get_spec - returns pointer to function specifier.
 * @format: format from struct.
 *
 * Return: pointer to function.
 */

int (*get_spec(const char *format))(va_list)
{
	unsigned int i;
	format_spec print_spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
		{NULL, NULL}
	};
	
	for (i = 0; print_spec[i].spec != NULL; i++)
	{
		if (*(print_spec[i].spec) == *format)
		{
			break;
		}
	}
	return (print_spec[i].f);
}

/**
 * _printf - recreation of a printf.
 * @format: conversion specifier to be evaluated.
 *
 * Return: count of char printed to SO.
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = get_spec(&format[i + 1]);
		if (func != NULL)
		{
			count += func(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count);
}
