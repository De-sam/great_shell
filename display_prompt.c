#include "simple_shell.h"
#include <unistd.h>

/**
 * display_prompt - Display the shell prompt
 */
void display_prompt(void) {
    const char *prompt = "(simple_shell)--> ";
    write(STDOUT_FILENO, prompt, strlen(prompt));
}
