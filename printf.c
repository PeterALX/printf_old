#include "main.h"
#include <stdlib.h>


/**
* _printf - a clone of the stdio printf function
* @str: the first param, a string, to be printed.
* Return: the number of chars printed
*/
int _printf(const char *str, ...)
{
	va_list ap; /* argument pointer */
	int i;
	int state;
	int char_count = 0;

	/*future feature: format flags struct will go here*/
	if (!str)
		return (-1);

	va_start(ap, str);

	state = 0;
	i = 0;
	while (str[i])
	{
		state = compute(state, str[i]);
		char_count += accept(&state, ap, str[i]);
		i++;
	}
	va_end(ap);
	return (char_count);
}
