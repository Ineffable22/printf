#include "main.h"
int hex_print(char c);
/**
 * digit_case_S - custom conversion specifier
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_case_S(va_list ptr)
{
	unsigned int pos = 0, len = 0;
	char *save = va_arg(ptr, char *);

	if (save == NULL)
		save = "(null)";
	while (*(save + pos))
	{
		if ((0 < *(save + pos) && 32 > *(save + pos)) || *(save + pos) >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += hex_print(*(save + pos));
			pos++;
		}
		else
			len += _putchar(*(save + pos++));
	}
	return (len);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}
