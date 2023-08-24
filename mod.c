#include "monty.h"

/**
 * mod_opc - implements mul opcode
 * @h: pointer to top of stack
 *
 * Return: second element which has the product
 */
void mod_opc(stack_t **h, unsigned int line)
{
	stack_t *trav = (*h)->prev;
	
	if (trav == NULL)
		return;
	if ((*h)->n == 0)
	{
		dprintf("L%d:division by zero\n", line);
		exit(EXIT_SUCCESS);
	}
	prev->n = prev->n % (*h)->n;
	pop(h);
}
