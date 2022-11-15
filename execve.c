#include "main.h"

/**
 * _execve - Execute passed commands in a child process
 * @argv: array of commands to be executed
 * Return - 0 on success.
 */
int _execve(char **argv)
{
	/* char *argv[] = {"/bin/ls", "-l", "/tmp", NULL}; */
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
		perror("Unable to create a child process.");
	if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Uncaught Error: Program not found!");
		return (0);
	}
	wait(&status); /*return to prompt*/

	return (0);
}
