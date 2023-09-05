#include "simple_shell.h"

/**
 * execute_command - Execute the given command
 * @command: The command to execute
 */
void execute_command(const char *command) {
    /*Execute the command using system()*/
    int exit_status = system(command);
    if (exit_status == -1) {
        perror("system");
    }
}
