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
/**
 * digit_base_16_upper - Convert a number to base 16 in upper case
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_base_16_upper(va_list ptr)
{
	unsigned int save = va_arg(ptr, unsigned int);

	return (convert_base(16, save, 0));
}
/**
 * digit_base_16_lower - Convert a number to base 16 in lower case
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_base_16_lower(va_list ptr)
{
	unsigned int save = va_arg(ptr, unsigned int);

	return (convert_base(16, save, 1));
}
/**
 * digit_base_8 - Convert a number to base 8
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_base_8(va_list ptr)
{
	unsigned int save = va_arg(ptr, unsigned int);

	return (convert_base(8, save, 0));
}
/**
 * digit_base_2 - Convert a number to base 2
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_base_2(va_list ptr)
{
	int save = va_arg(ptr, int);

	return (convert_base(2, save, 0));
}
