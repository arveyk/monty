#include "monty.h"

/**
 * sub_opc - implements the sub opcode
 * @h: the argument to push to the stack
 *
 * Return: we'll see
 */
void sub_opc(stack_t **h, unsigned int line)
{
	stack_t *trav = (*h)->prev;

	if (trav == NULL)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	trav->n = trav->n - (*h)->n;
	pop_opc(h, line);
}
