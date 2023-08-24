#include "monty.h"

/**
 * mul_opc - implements mul opcode
 * @h: pointer to top of stack
 *
 * Return: second element which has the product
 */
void mul_opc(char *h)
{
	stack_t *trav = h;
	stack_t *prod = NULL;

	if (trav == NULL)
		return;

	trav = trav->prev;
	trav->n = trav->n * h->n;
	prod = pop(h);
}
