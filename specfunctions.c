#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*spec_c - prints char to stdout
*@c: char to print
*Return: # of chars printed
*/
int spec_c(va_list c)
{
	unsigned int count = 0;

	if (!c)
	{
		return (0);
	}
	_putchar((char)va_arg(c, int));
	count++;

	return (count);
}

/**
*spec_s - prints str to stdout
*@s: str to print
*Return: len of str
*/
int spec_s(va_list s)
{
	int len;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (len = 0; str[len]; len++)
	{
		_putchar(str[len]);
	}
	return (len);
}

/**
*spec_id - prints int/dec to stdout
*@id: int/dec to print out
*Return: length of int/dec
*/
int spec_id(va_list id)
{
	int len = 0, i = 0;
	int v = va_arg(id, int), divider = 1;
	char intmin[11] = {"-2147483648"};

	if (v == INT_MIN)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(intmin[i]);
			len++;
		}
		return (len);
	}
	if (v < 0)
	{
		_putchar('-');
		v = -v;
		len++;
	}

	while ((v / divider) >= 10)
	{
		divider *= 10;
	}

	while (divider >= 1)
	{
		_putchar((v / divider + '0'));
		v = v % divider;
		divider /= 10;
		len++;
	}

	return (len);
}
