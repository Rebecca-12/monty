#include <stdio.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array containing the command-line arguments.
* Return: 0 on success, non-zero on failure.
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (1);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{

		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (1);
	}

	char line[100];
	int line_number = 1;

	while (fgets(line, sizeof(line), file))
	{

		/* Process the line here*/

		line_number++;
	}

	fclose(file);
	return (0);
}
