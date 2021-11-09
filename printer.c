#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
        int x = 0;

        while (str[x] != 0)
        {
		_putchar(str[x]);
                x++;
        }
}
/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
