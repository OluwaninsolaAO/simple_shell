#include "main.h"

/**
 * _printf - simple function to  print a string
 * @string: string
 * Return: nothing
 */
void _printf(char *string)
{
	int n = 0;

	while (*(string + n) != '\0')
	{
		_putchar(*(string + n));
		n++;
	}
}
