#include "monty.h"

/**
 * pop_opc - implements the pop command, pops the top of stack
 * @h: pointer to top of stack
 *
 * Return: NONE
 */
void pop_opc(stack_t **h, unsigned int line)
{

	stack_t *second = NULL;

	if (*h == NULL)
	{
		perror("L %d: can't pop an empty stack", line);
		exit(EXIT_FAILURE);
	}
	second = (*h)->next;
	printf("%d\n", (*h)->n);
	free(h);
	if (second)
		second->prev = NULL;
	(*h) = second;
}
