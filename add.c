#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * counter - line_number
 * @head : the stack head
 *
 */

void f_add(stack_t **head, unsigned int, counter)
{
	if (*head < 2)
	{
		fprint(stderr, "L<line_number>: can't add, too short\n" counter);
		fclose(stack.file);
		free(stack.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
		}
		int operand2 = stack[--stack[1]];
		int operand1 = stack[--stack[1]];
		stack[stack[1]++] = operand2;
}

