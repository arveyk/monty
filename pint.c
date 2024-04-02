#include "monty.h"

/**
 * pall_opc - implements the pall opcode
 * @h: pointer to the top of the stack
 * 
 * Return: None
 */
void pall_opc(stack_t **h, unsigned int line)
{

	stack_t *trav;
	trav = *h;

	if (trav == NULL)
		return;
	printf("%d\n", trav->n);
}
