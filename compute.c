#include "main.h"


/**
 * compute - computes next state based on the token and current state
 * @state: the current state
 * @token: the char currently being read
 * Return: the next state
 */
int compute(int state, char token)
{
	if (state == 0)
	{
		if (token == '%')
			state = 1;
	}
	else if (state ==  1)
	{
		if (token == '%')
			state = 0;
		else if (token == 'd' || token == 'i')
			state = 3;
		else if (token > '0' && token <= '9')
			state = 2;
		else if (token == 'c')
			state = 4;
		else if (token == 's')
			state = 5;
		/*future feature: check format specifiers here*/
	}
	else if (state == 2)
	{
		if (token == 'd')
			state = 3;
	}
	return (state);

}
