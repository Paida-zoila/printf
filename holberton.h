#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *struct convert - defines a structure for symbols and functions
 *
 * @y :  operator
 * @f: function
 */

struct convert
{
	char *y;
	int (*f)(va_list);

};
typedef struct convert conver_t;

/* functions for the project*/
int _printf(const char *format, ...);
int _putchar(char c);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_decimal_integer(va_list);
int print_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);

#endif/*printf*/
