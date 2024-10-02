#ifndef MONTY_H
#define MONTY_H

/*
 * #include <string.h>
*/
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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
 * Description: opcode name (as a string)  and its function(function pointer)
 * for stack, queque, LIFO,FIFO
 */
typedef struct instruction_s
{

	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **strtow(char *);
int exec_c(char **str, unsigned int line);

void add_opc(stack_t **stack, unsigned int line);
void sub_opc(stack_t **stack, unsigned int line);
void mul_opc(stack_t **stack, unsigned int line);
void div_opc(stack_t **stack, unsigned int line);

void pint_opc(stack_t **stack, unsigned int line);
void pop_opc(stack_t **stack, unsigned int line);
void swap_opc(stack_t **stack, unsigned int line);
void nop_opc(stack_t **stack, unsigned int line);

void mod_opc(stack_t **stack, unsigned int line);
void pchar_opc(stack_t **stack, unsigned int line);
void pstr_opc(stack_t **stack, unsigned int line);

void rotl_opc(stack_t **stack, unsigned int line);
void rotr_opc(stack_t **stack, unsigned int line);
void queue_opc(stack_t **stack, unsigned int line);
void pall_opc(stack_t **stack, unsigned int line);

#endif	/* MONTY_H */
