#include "monty.h"

/**
 * push_opc - pushes a number on top of the stack
 * @h: pointer to the top of the stack
 *
 * Return: None for now but...(pointer to top of satck, NULL if fails)
 */
void push_opc(char **h, int n);
{

	stack_t *new_top = NULL;

	new_top = malloc(sizeof(stack_t));
	if (new_stack == NULL)
		return;
	new_top->next = NULL;
	new_top->prev = *head;
	new_top->n = n;

	if (*(head) != NULL)
		(*head)->next = new_top;
	(*head) = new_top;
}
