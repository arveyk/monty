#include "monty.h"

/**
 * pall_opc - implements the pall opcode
 * @h: pointer to the top of the stack
 * 
 * Return: None
 */
void pall_opc(char *h)
{

	stack_t *trav = h;

	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->prev;
	}
}
