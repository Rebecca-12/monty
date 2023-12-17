#include "monty.h"

/**
* mod_op - computes the rest of the division of the second top element
* of the stack by the top element.
* @stack: double pointer to the beginning of the stack
* @line_number: line number being executed from the Monty file
*/
void mod_op(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;

	/* Pop the top element*/
	pop(stack, line_number);
}
