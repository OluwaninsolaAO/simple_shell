#include "main.h"

/**
 * prompt - prints system prompt on primary output.
 * Return: 0 on success..
 */
int prompt(void)
{
	char *prompt_style = "$ ";
	int n = 0;

	size_t chars __attribute__ ((unused));
	char *buffer = NULL;
	size_t bufsize = 0;

	while (*(prompt_style + n))
	{
		write(1, prompt_style + n, 1);
		n++;
	}

	chars = getline(&buffer, &bufsize, stdin); /*execve buffer and takes exit clause into account*/

	prompt();

	return (0);
}
