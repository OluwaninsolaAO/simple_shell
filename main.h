#ifndef MAIN_SHELL_H
#define MAIN_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>












int prompt(void);
int _execve(char **argv);
int uninteractive_execve(int argc, char **argv);

int _putchar(char c);
void _printf(char *string);

#endif
