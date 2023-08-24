#include "monty.h"

/**
 * swap - swaps the top 2 elements of the stack
 * @h: pointer to top of the stack
 *
 * Return: None
 */
void swap(char *h)
{
	int temp = h->n;

	h->n = h->prev->n;
	h->prev->n = temp;
}
