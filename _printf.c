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

	if (restriction_percentage(format) == -1 || !format)
		return (-1);
	
	va_start(ptr, format);
	while (*(format + pos) != '\0')
	{
		savec = (format + pos);	
		if (*savec == '%' && *(savec + 1) != '%')
		{
			len = match_case(savec + 1)(ptr);
			if (len == -1)
				return (-1);
			tmp += len;

			pos = pos + 2;
			savec = (format + pos);	
		}
		if (*(savec) == '%' && *(savec + 1) == '%')
			pos++, savec = (format + pos);
		if (*(savec - 1) != '%' && *(savec) == '%' && *(savec + 1) != '%')
			continue;
