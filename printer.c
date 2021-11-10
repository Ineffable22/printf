#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @buffer: The content of the buffer
 * @size: the size of the buffer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *buffer, int size)
{
	return (write(1, buffer, size));
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
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = 0;
	while (src[n] != 0)
	{
		n++;
	}
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
