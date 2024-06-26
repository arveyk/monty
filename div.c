#include "monty.h"

/**
 * div_opc - implements mul opcode
 * @h: pointer to top of stack
 *
 * Return: NONE
 */
void div_opc(stack_t **h, unsigned int line)
{
	stack_t *trav = (*h)->prev;
	
	if (trav == NULL)
		return;
	if ((*h)->n == 0)
	{
		dprintf(2, "L%u:division by zero\n", line);
		exit(EXIT_SUCCESS);
	}
	trav->n = trav->n / (*h)->n;
	pop_opc(h, line);
}
