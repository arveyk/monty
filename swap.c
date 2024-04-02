#include "monty.h"

/**
 * swap - swaps the top 2 elements of the stack
 * @h: pointer to top of the stack
 *
 * Return: None
 */
void swap(stack_t **h, unsigned int line)
{
	stack_t *next;
	int temp;
	
	if (*h == NULL)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	if ((*h)->next == NULL)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	temp = (*h)->n;

	next = (*h)->next;
	if (next)
	{
		(*h)->n = next->n;
		next->n = temp;
	}
}
