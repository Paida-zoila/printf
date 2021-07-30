#include "holberton.h"
<<<<<<< HEAD
/**
 * format_R - functtion that converts a string into rot13
 * @valist: argument passed
 * @buffer: values stored
 * @index: tracks index position
 */
void format_R(va_list valist, char *buffer, int *index)
{
	char *s;
	int i, j;

	char *s1 = "abcdefghijklmABCDEFGHIJKLM ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";
	char *s2 = "nopqrstuvwxyzNOPQRSTUVWXYZ ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";

	s = va_arg(valist, char *);
	for (i = 0; s[i] != '\0'; i++, *index += 1)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
			{
				buffer[*index] = s2[j];
			}
			else if (s[i] == s2[j])
			{
				buffer[*index] = s1[j];
			}
		}
	}
=======
#include <stdlib.h>

/**
 * print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
>>>>>>> 1025a9009f7941700f30d21e6bf8a42443d2bd47
}
