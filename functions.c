#include "main.h"
/**
 * convert_base - Convert base and add argument in the buffer
 * @base: Number of base to convert
 * @number: Number to convert
 * @band: Flag with order to follow
 *
 * Return: length of string added to buffer
 */
int convert_base(int base, int number, int band)
{
	char buffer[17];
	char *ptr;
	long int save = number;

	if (band == 0)
		_strcpy(buffer, "0123456789ABCDEF");
	else
		_strcpy(buffer, "0123456789abcdef");
	*ptr = '\0';
	ptr--;

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}
	/* - - - - - - - - convert - - - - - - -  */
	if (number < 0)
		number = -number;
	while (number > 0)
	{
		*ptr-- = buffer[number % base];
		number = number / base;
	}
	/* -- -  -- -- - - -- - - - -- - - - -- */
	if (save < 0)
		*ptr-- = '-';
	if (band == 16)
		*ptr-- = 'x', *ptr-- = '0';
	ptr++;

	return (write(1, ptr, _strlen(ptr)));
}


/**
 * print_number - prints an integer.
 * @n: integer n to print using _putchar
 *
 * Return: none - void function
 */
int print_number(int n)
{
	unsigned int r;
	int _length = 0;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
		_length++;
	}
	r = n;

	if (r / 10)
	{
		_length += print_number(r / 10);
	}
	_putchar(r % 10 + '0');
	_length++;
	return (_length++);
}
