#include "monty.h"

/**
* add - adds the top two elements of the stack.
* @stack: double pointer to the beginning of the stack
* @line_number: line number being executed from the Monty file
*/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	temp->n += (*stack)->n;
	temp->prev = NULL;
	(*stack)->prev = temp;
	free(*stack);
	*stack = temp;
}
