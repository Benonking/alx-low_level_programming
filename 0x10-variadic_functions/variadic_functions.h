#ifndef VARIADIC
#define VARIADIC

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct dt - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;

#endif
