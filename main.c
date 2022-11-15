#include "main.h"

/**
 * main - this is a simple shell project
 * @argc: call arguement count
 * @argv: call arguement vector
 * @env: passed environment
 * Return: 0 on success.
 */

int main(int argc __attribute__ ((unused)), char **argv __attribute__ ((unused)), char **env __attribute__ ((unused)))
{





	int n = argc;

	while (n > 0) /*checking for passed arguements*/
	{
		_printf(argv[n - 1]);
		_printf("\n");
		n--;
	}
	_printf("::::::::::::::::::::::::::::::::::\n");

	if (argc == 1)
	{
		prompt();
	}
	else
	{
		uninteractive_execve(argc, argv);
	}

	return (0);
}
