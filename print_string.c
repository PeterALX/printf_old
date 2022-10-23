#include "main.h"

/**
* print_string - prints a string
* @str: the string to be printed
*
* Return: the number of chars printed
*/
int print_string(char *str)
{
	int char_count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		char_count++;
		_putchar(*str);
		str++;
	}
	_putchar('\0');
	return (char_count);
}
