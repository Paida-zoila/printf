#printf

Synopsis:
#include <stdio.h>
int printf(const char *restrict format, ...);

Descrption:
The functions in the printf() family produce output according to a format as described below. The function printf() writes output to stdout, the standard output stream.

All of these functions write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier. In between there may be (in this order - flags, an optional minimum field width, an optional precision and an optional length modifier.

Conversion specifiers:
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_decimal_integer},
{"i", print_integer},
{"u", unsigned_integer},
{"o", print_octal},
{"x", print_hex},
{"X", print_HEX},
{"b", print_binary},
{"r", print_reversed_string},
{"p", print_pointer},
{"R", rot13},

holberton.h is the header file with all the prototypes of functions used in this project.

_putchar.c defines the _putchar function.

parser.c defines the parser function.

man_3_printf is the man page.
