#include "main.h"
/**
 * char_case - Add the argument character to the buffer
 * @ptr: A variable that points to a list of arguments
 * @add: A pointer pointing to a memory address within the buffer
 *
 * Return: length of string added to buffer
 */
int char_case(va_list ptr, char **add)
{
	char c = va_arg(ptr, int);

	**add = c;
	(*add)++;
	return (0);
}
/**
 * string_case - Add the argument string to the buffer
 * @ptr: A variable that points to a list of arguments
 * @add: A pointer pointing to a memory address within the buffer
 *
 * Return: length of string added to buffer
 */
int string_case(va_list ptr, char **add)
{
	char *save = va_arg(ptr, char *);

	if (save == NULL)
		save = "(null)";
	while (*save != '\0')
	{
		**add = *save;
		(*add)++;
		save++;
	}
	return (0);
}
/**
 * digit_case_u - Add the argument unsigned int to the buffer
 * @ptr: A variable that points to a list of arguments
 * @add: A pointer pointing to a memory address within the buffer
 *
 * Return: length of string added to buffer
 */
int digit_case_u(va_list ptr, char **add)
{
	unsigned int save = va_arg(ptr, unsigned int);

	return (print_number(save, add));
}
/**
 * digit_case_address - Add the argument hexadecimal to the buffer
 * @ptr: A variable that points to a list of arguments
 * @add: A pointer pointing to a memory address within the buffer
 *
 * Return: length of string added to buffer
 */
int digit_case_address(va_list ptr, char **add)
{
	long int save = va_arg(ptr, unsigned long int);
	char *isNill = "(nil)", *f_all = "0xffffffffffffffff";

	if (save == 0)
	{
		while (*isNill != '\0')
		{
			**add = *isNill;
			(*add)++;
			isNill++;
		}
		return (0);
	}
	if (save == -1)
	{
		while (*f_all != '\0')
		{
			**add = *f_all;
			(*add)++;
			f_all++;
		}
		return (0);
	}

	return (convert_base(16, save, 16, add));
}
