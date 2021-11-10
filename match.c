#include "main.h"
/**
 * match_case - function that matches the flag passed as an argument
 * @flag: pointer to flag
 *
 * Return: Pointer to function associated to flag
 */
int (*match_case(const char *flag))(va_list ptr, char **add)
{
	int pos = 0;

	c_mtc flag_store[] = {
		{"s", string_case},
		{"c", char_case},
		{"d", digit_base_10},
		{"i", digit_base_10},
		{"b", digit_base_2},
		{"x", digit_base_16_lower},
		{"X", digit_base_16_upper},
		{"o", digit_base_8},
		{"u", digit_case_u},
		{"S", digit_case_S},
		{"p", digit_case_address},
		{"R", rot13},
		{"r", print_rev_string},
		{NULL, NULL}
	};

	while (pos < 13)
	{
		if (*(flag_store[pos]).c == *flag)
			return (flag_store[pos].f);
		pos++;
	}
	return (flag_store[pos].f);
}
