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
	int pos;
	va_list ptr;
	char buff[2000];
	char *add = &buff[0];

	va_start(ptr, format);

	if ((format == NULL) || (*(format) == '%' && *(format + 1) == '\0'))
		return (-1);
	if (*(format) == '\0')
		return (0);
	for (pos = 0; *(format + pos) != '\0'; pos++)
	{
		if (*(format + pos) == '%' && *(format + pos + 1) == '%')
		{
			*add = *(format + pos);
			add++;
			/*count +=write(1, format + pos, 1);*/
			pos++;
			continue;
		}
		if (*(format + pos) == '%' && *(format + pos + 1) == '\0')
		{
			return (-1);
		}
		if (*(format + pos) == '%')
		{
			if (match_case(format + pos + 1) != NULL)
			{
				match_case(format + pos + 1)(ptr, &add);
				pos++;
				continue;
			}
		}
		*add = *(format + pos);
		add++;
		/*count += write(1, format + pos, 1);*/
	}
	va_end(ptr);
	return (_putchar(buff, add - (char *)buff));
}
