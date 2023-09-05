#include "simple_shell.h"

int main(void)
{	
	char *input;
	while (TRUE)
	{
		display_prompt();

		input = read_command();
		execute_command(input);

		free(input);
	}

	return 0;
}
