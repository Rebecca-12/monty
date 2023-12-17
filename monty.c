#include "monty.h"

/**
* main - Entry point of the Monty bytecode interpreter.
* @argc: The number of command-line arguments.
* @argv: An array containing the command-line arguments.
* Return: 0 on success, non-zero on failure.
*/

int main(int argc, char *argv[])
{
	/* Check if the correct number of command-line arguments is provided*/
	if (argc != 2)
	{
		handle_error("USAGE: ./monty file");
	}

	/* Get the file path from the command-line arguments*/
	const char *file_path = argv[1];

	/* Check if the file path is valid*/
	if (file_path == NULL || file_path[0] == '\0')
	{
		handle_error("Invalid file path");
	}

	/* Parse and process the Monty instructions from the file*/
	parse_file(file_path);

	return (0);
}
