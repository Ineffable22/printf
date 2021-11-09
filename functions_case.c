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

	return (write(1, &c, 1));
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

	if (save == NULL)
		save = "(null)";
	return (write(1, save, _strlen(save)));
}

/**
 * digit_case_u - Add the argument unsigned int to the buffer
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_case_u(va_list ptr)
{
	long int save = va_arg(ptr, long int);

	if (save < 0)
	{
		if (-(save + 1) > 2147483647)
			return (-1);
	}
	save = (save >= 0) ? save : (4294967296 + save);
	return (convert_base(10, save, 0));
}
