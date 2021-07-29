#include "holberton.h"
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

