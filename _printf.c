#include "main.h"
/**
 * _printf - Prints the string
 * @format: A variable that points to a list of arguments
 * @...: The rest of the arguments
 *
 * Return: the length of the printed string
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int pos = 0, len = 0, tmp = 0, count = 0;
	const char *savec;

	if (format == NULL)
		exit(255);
	if (restriction_percentage(format) == -1)
		exit(1);

	va_start(ptr, format);
	while (*(format + pos) != '\0')
	{
		savec = (format + pos);
		if (*savec == '%' && *(savec + 1) != '%')
		{
			len = match_case(savec + 1)(ptr);
			tmp += len;

			pos = pos + 2;
			savec = (format + pos - 2);
		}
		if (*(savec) == '%' && *(savec + 1) == '%')
			pos++, savec = (format + pos);
		if (*(savec - 1) != '%' && *(savec) == '%' && *(savec + 1) != '%')
			continue;
		_putchar(*(savec));
		count++;
		pos++;
	}
	if (count == 0 && len == 0)
		exit(1);
	va_end(ptr);
	return (count + tmp);
}
/**
 * restriction_percentage - checks the percentages
 * @str: A variable that points to a list of arguments
 *
 * Return: the length of the printed string
 */
int restriction_percentage(const char *str)
{
	int pos = 0, count = 0;

	while (*(str + pos))
	{
		if (*(str + pos) == '%')
		{
			count = 0;
			while (*(str + pos) == '%')
			{
				count++;
				pos++;
			}
			if (count % 2 != 0 && match_case(str + pos) == NULL)
			{
				return (-1);
			}
		}
		pos++;
	}
	return (0);
}
