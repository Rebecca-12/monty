#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

stack_t *stack = NULL; /* Global variable representing the stack*/

void push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

int main(int argc, char *argv[])
{
    /* ...*/

	while (fgets(line, sizeof(line), file))
	{
		/* Process the line here*/

		/* Check if the opcode is "push"*/
		if (strcmp(opcode, "push") == 0)
		{
			/* Get the argument value*/
			int value = atoi(argument);
			/* Call the push function*/
			push(&stack, value);
		}

		line_number++;
	}

    /* ...*/

    return (0);
}
