#include "main.h"
/**
 * match_case - function that matches the flag passed as an argument
 * @flag: pointer to flag
 *
 * Return: Pointer to function associated to flag
 */
int (*match_case(const char *flag))(va_list)
{
	int pos = 0;

	c_mtc flag_store[] = {
		{"s", string_case},
		{"c", char_case},
