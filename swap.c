#include "monty.h"

/**
* swap - swaps the top two elements of the stack.
* @stack: double pointer to the beginning of the stack
* @line_number: line number being executed from the Monty file
*/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;

	*stack = temp;
}
