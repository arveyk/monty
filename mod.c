#include "monty.h"

/**
 * mod_opc - implements mul opcode
 * @h: pointer to top of stack
 *
 * Return: second element which has the product
 */
void mod_opc(stack_t **h, unsigned int line)
{
	
	stack_t *trav;

	if (*h == NULL)
		return;
	trav = (*h)->prev;
	if (trav == NULL)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line);
		exit(EXIT_SUCCESS);
	}
	if ((*h)->n == 0)
	{
		dprintf(2 ,"L%d:division by zero\n", line);
		exit(EXIT_SUCCESS);
	}
	prev->n = prev->n % (*h)->n;
	pop_opc(h, line);
}
