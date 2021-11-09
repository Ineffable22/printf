#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct case_match - Stores a flag and the function
 * pointer associated with it
 * @c: Pointer to the flag
 * @f: Pointer to function
 *
 * Description: Longer description
 */
typedef struct case_match
{
	char *c;
	int (*f)(va_list);
} c_mtc;
/* ------------------------------------*/
int _putchar(char c);
void _puts(char *str);
int _strlen(char *);
char *_strcpy(char *, char *);
char *_strcat(char *, char *);
/* --------------------------- */
int char_case(va_list);
int string_case(va_list);
int digit_case_u(va_list ptr);

int digit_base_10(va_list);
int digit_base_2(va_list ptr);
int digit_base_8(va_list ptr);
int digit_base_16_lower(va_list ptr);
int digit_base_16_upper(va_list ptr);
/*------------------------------------*/
int restriction_percentage(const char *str);
int (*match_case(const char *))(va_list);
int convert_base(int base, long int number, int band);
int print_number(int n);

#endif
