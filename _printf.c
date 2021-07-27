#include "holberton.h"

/**
* _printf - prints according to a format
* @format: character string
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
int count_chars;

conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_decimal_integer},
{"i", print_integer},
{"u", print_unsigned_integer},
{"o", print_octal},
{"x", print_hex},
{"X", print_HEX},
{"b", print_binary},
{"r", print_reversed_string},
{"p", print_pointer},
{"R", rot13},
{NULL, NULL}
};

va_list arg_list;
if (format == NULL)
return (-1);

va_start(arg_list, format);
count_chars = parser(format, f_list, arg_list);
va_end(arg_list);

return (count_chars);
}
