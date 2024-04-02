#include "monty.h"

/**
 * push_opc - pushes a number on top of the stack
 * @h: pointer to the top of the stack
 * @n: integer to be added at top of stack
 *
 * Return: None for now but...(pointer to top of satck, NULL if fails)
 */
void push_opc(stack_t **h, unsigned int n)
{

	stack_t *new_top = NULL;

	new_top = malloc(sizeof(stack_t));
	if (new_top == NULL)
		return;
	new_top->prev = NULL;
	new_top->next = *h;
	new_top->n = n;
/*
 * new_top->next = NULL;
 * new_top->prev = *h;
	*/

	if (*(h) != NULL)
		(*h)->prev = new_top;
	*h = new_top;
}
