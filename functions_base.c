#include "main.h"
/**
 * digit_base_10 - Convert a number to base 10
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_base_10(va_list ptr)
{
	int save = va_arg(ptr, int);

	return (print_number(save));
}
