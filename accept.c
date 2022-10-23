#include "main.h"

/**
 * accept - perfoms an action based on the state
 * @state: determines what action the accept function will perform
 * @ap: argument pointer
 * @token: the character being read currently,
 * Return: the number of chars printed
 */
int accept(int *state, va_list ap, char token)
{
	int char_count = 0;

	if (*state == 0)
	{
		_putchar(token);
		char_count++;
	}
	else if (*state == 1)
	{
	}
	else if (*state == 2)
	{
	}
	else if (*state == 3)
	{
		char_count = print_int(va_arg(ap, int));
		*state = 0;
	}
	else if (*state == 4)
	{
		_putchar(va_arg(ap, int));
		char_count++;
		*state = 0;
	}
	else if (*state == 5)
	{
		char_count += print_string(va_arg(ap, char*));
		*state = 0;
	}
	else if (*state == 6)
	{
		char_count = print_unsigned_int(va_arg(ap, unsigned int));
		*state = 0;
	}
	return (char_count);
}
