#include "simple_shell.h"

/**
 * read_command - Read user input and return it as a string
 *
 * Return: Pointer to the user's input string
 */
char *read_command(void) {
    char *input = NULL;
    size_t len = 0;
    size_t input_length;

    if (getline(&input, &len, stdin) == -1) {
        if (feof(stdin)) {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
        perror("getline");
        exit(EXIT_FAILURE);
    }

    /*Remove newline character*/
     input_length = strlen(input);
    if (input_length > 0 && input[input_length - 1] == '\n') {
        input[input_length - 1] = '\0';
    }

    return input;
}
