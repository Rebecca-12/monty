#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

stack_t *stack = NULL; /* Global variable representing the stack */

void push(stack_t **stack, int value)
{
    /* ...*/
}

void pall(stack_t **stack)
{
	stack_t *current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

int main(int argc, char *argv[])
{
	/* ... */

	while (fgets(line, sizeof(line), file))
	{
		/* Process the line here*/

        /* Check if the opcode is "pall"*/
        if (strcmp(opcode, "pall") == 0)
	{
		/* Call the pall function*/
		pall(&stack);
	}

	line_number++;
	}

    /* ...*/

    return 0;
}
