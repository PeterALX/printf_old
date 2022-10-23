#include "main.h"

/**
* _putchar - "print a char"
* @a: char to be printed
* Return: void
*/
void _putchar(char a)
{
	char buf[1];

	buf[0] = a;

	write(1, buf, 1);
}
