#include "holberton.h"
/**
 *print_char - funtion that prints character
 *@list: of arguements
 *Return: characters to be printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 *print_string - function that prints string
 *@list: arguments
 *Return: characters to be printed
 */
int print_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "null";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
/**
 *print_percent - function that prints % symbol
 *@list: arguments
 *Return: characters to be printed.
 */
int print_percent(__attribute__ ((unused))va_list list)
{
	_putchar('%');
	return (1);
}
/**
 *unsigned_integer - function that  printd positive integers only
 *@list: arguments
 *Return: all the numbers.
 */
int print_unsigned_integer(va_list list)
{
	unsigned int i;

	i = va_arg(list, unsigned int);

	if (i == 0)
		return (print_unsgined_number(i));

	if (i < 1)
		return (-1);
	return (print_unsgined_number(i));
}
/**
 *print_integer - function that prints an integer
 *@list: arguments
 *Return: charcters to be printed.
 */
int print_integer(va_list list)
{
	int len;/*len = length*/

	len = print_integer(list);
	return (len);

}
