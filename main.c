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











	if (argc == 1)
	{
		return (prompt());
	}
	else
	{
		return (uninteractive_execve(argc, argv));
	}
}

