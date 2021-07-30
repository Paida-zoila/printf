<<<<<<< HEAD
#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
void _write_buffer(char *buffer, int *index);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
char *itos(char str[], long int num);
char *utos(char str[], int num);
int num_len(int num);
int float_len(double f);
void format_i(va_list valist, char *buffer, int *index);
void format_u(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
char *tostring(char str[], int num);
int num_len(int num);
void reset_buffer(char buffer[]);
void *rot13(char *s);
void rev_string(char *s);
void format_h(va_list valist, char *buffer, int *index);
void format_ch(va_list valist, char *buffer, int *index);
void format_o(va_list valist, char *buffer, int *index);
void format_b(va_list valist, char *buffer, int *index);
void format_r(va_list valist, char *buffer, int *index);
void format_R(va_list valist, char *buffer, int *index);
#endif /* HOLBERTON_H */
=======
#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif  /* _HOLBERTON_H */
>>>>>>> 1025a9009f7941700f30d21e6bf8a42443d2bd47
