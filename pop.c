#include "monty.h"

/**
 * pop_opc - implements the pop command, pops the top of stack
 * @h: pointer to top of stack
 *
 * Return: NONE
 */
void pop_opc(stack_t **h unsigned int line)
{

	stack_t *second = NULL;

	if (*h == NULL)
		return;
	stack_t *second = (*head)->prev;
	printf("%d\n", (*head)->n);
	free(head);
	prev->next = NULL;
	(*head) = prev;
}
