#include "monty.h"

/**
 * add_opc - implements the add opcode
 * @num: the argument to push to the stack
 *
 * Return: None
 */
void add_opc(stack_t **head, unsigned int line)
{
	trav = (*head)->prev;
	
	if (prev == NULL)
	{
		perror("L%dcan't add, stack too short", line);
		exit(EXIT_FAILURE);
	}
	prev->n = prev->n + (*head)->n;
	pop(head);
}
