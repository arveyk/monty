#include "monty.h"

/**
 * mul_opc - implements mul opcode
 * @h: pointer to top of stack
 *
 * Return: second element which has the product
 */
void mul_opc(stack_t **h, unsigned int line)
{
	stack_t *trav = *h;
	stack_t *prev = (*h)->prev;

	if (trav == NULL || prev == NULL)
	{
	
		dprintf(2, "L%d: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	trav->n = trav->n * prev->n;
	pop_opc(h, line);
}
