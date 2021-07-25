#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
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


#endif/*printf*/
