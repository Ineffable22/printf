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
		{"d", digit_base_10},
		{"i", digit_base_10},
		{NULL, NULL}
	};

	while (pos < 4)
	{
		if (*(flag_store[pos]).c == *flag)
			return (flag_store[pos].f);
		pos++;
	}
	return (flag_store[pos].f);
}
