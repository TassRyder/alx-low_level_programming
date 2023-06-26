#include <stdio.h>

/**
 * _strlen - Returns the legnth of a string.
 * @str: The string to get the legnth of
 * Return: The legnth of @str.
 */
size_t _strlen(const char *str)

{
	size_t legnth = 0;

	while (*str++)
	legnth++;
	return (legnth);
}
