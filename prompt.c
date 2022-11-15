#include "main.h"

/**
 * prompt - prints system prompt on primary output.
 * Return: 0 on success..
 */
int prompt(void)
{
	size_t chars __attribute__ ((unused));
	char *buffer = NULL;
	size_t bufsize = 0;











	_printf("$ ");

	chars = getline(&buffer, &bufsize, stdin); /*execve buffer and takes exit clause into account*/

	prompt();

	return (0);
}
