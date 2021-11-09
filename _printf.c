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
	int pos, count = 0;
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL)
		return (-1);
	for (pos = 0;*(format + pos) != '\0'; pos++)
	{
		if (*(format + pos) == '%' && *(format + pos + 1) == '%')
		{
			count += write(1, format + pos, 1);
			pos++;
			continue;
		}
		if (*(format + pos) == '%')
		{
			if (match_case(format + pos + 1) != NULL)
			{
				count += match_case(format + pos + 1)(ptr);
				pos++;
				continue;
			}
		}
		count += write(1, format + pos, 1);
	}
	va_end(ptr);
	return (count);
}
