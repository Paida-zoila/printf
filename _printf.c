#include "holberton.h"
<<<<<<< HEAD
/**
  * _printf - function that prints based on format specifier
  * @format: takes in format specifier
  * Return: return pointer to index
  */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_d},
		{'u', format_u}, {'%', format_perc}, {'x', format_h}, {'X', format_ch},
		{'o', format_o}, {'b', format_b}, {'p', format_p}, {'r', format_r},
		{'R', format_R}, {'\0', NULL}
	};
	if (!format)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			if (*index == 1024)
			{	_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{	i++;
			for (j = 0; spec[j].tp != '\0'; j++)
			{
				if (format[i] == spec[j].tp)
				{	spec[j].f(valist, buffer, index);
					break;
				}
			}
		}
	}
	va_end(valist);
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);
=======
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
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
	va_end(valist);
	return (count);
>>>>>>> 1025a9009f7941700f30d21e6bf8a42443d2bd47
}
