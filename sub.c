#include "monty.h"

/**
 * sub_opc - implements the sub opcode
 * @h: the argument to push to the stack
 *
 * Return: we'll see
 */
void sub_opc(stack_t *h)
{
	trav = h->prev;

	trav->n = trav->n - h->n
	pop(head);
}
