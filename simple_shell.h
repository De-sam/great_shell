#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define TRUE 1
#define FALSE !TRUE

/*Function prototypes*/
void display_prompt(void);
char *read_command(void);
void execute_command(const char *system);

#endif /* SIMPLE_SHELL_H */
