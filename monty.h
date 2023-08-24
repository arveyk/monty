#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or a queque)
 * @n: integer
 * @prev: pointer to the previous element of the stack (or queue)
 * @next: pointer to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instructions_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queque, LIFO,FIFO
 */
typedef struct instruction_s
{

	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct commands - words with opcode and pointer to a function pointer
 * @
 * @
 *
 * Description: 
 */

char **strtow(char *);

typedef struct commands
{

	char *name;
	struct instruction_s;
}

#endif	/* MONTY_H */
