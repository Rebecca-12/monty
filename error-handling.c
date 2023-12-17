#include "monty.h"

/**
* handle_error - Prints an error message to stderr and exits with failure.
* @message: The error message to be printed.
*/

void handle_error(const char *message)
{
	/* Print the error message to stderr*/
	fprintf(stderr, "Error: %s\n", message);

	/* Exit the program with EXIT_FAILURE status*/
	exit(EXIT_FAILURE);
}
