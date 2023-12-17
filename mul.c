
#include "monty.h"

/**
* mul_op - multiplies the second top element of the stack with the top element.
* @stack: double pointer to the beginning of the stack
* @line_number: line number being executed from the Monty file
*/
void mul_op(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;

	/* Pop the top element*/
	pop(stack, line_number);
}
