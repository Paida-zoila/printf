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
int print_char(va_list); /*c*/
int print_string(va_list); /*s*/
int print_percent(va_list);/*%*/
int print_decimal_integer(va_list); /*d*/
int print_integer(va_list); /*i*/
int print_octal(va_list list);/*o*/
int print_hex(va_list list);/*x*/
int print_HEX(va_list list);/*X*/
int print_binary(va_list);/*b*/
int print_unsigned_integer(va_list);/*u*/
int print_reversed_string(va_list arg);/*r*/
int print_pointer(va_list);/*p*/
int rot13(va_list);/*R*/
/* helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
#endif/*holberton.h*/
