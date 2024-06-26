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
	(void)line;

	if (trav == NULL)
		return;
	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
	}
}
