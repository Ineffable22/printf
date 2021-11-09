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
	char buffersito[20];
	char *ptr = &buffersito[20];
	int save = number;

	if (band == 0)
		_strcpy(buffer, "0123456789ABCDEF");
	else
