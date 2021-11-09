#include "main.h"
/**
 * char_case - Add the argument character to the buffer
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int char_case(va_list ptr)
{
	char c = va_arg(ptr, int);

	if (c != '\0')
		_putchar(c);
	return (1);
}
/**
 * string_case - Add the argument string to the buffer
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int string_case(va_list ptr)
{
	char *save = va_arg(ptr, char *);

	_puts(save);
	return (_strlen(save));
}
