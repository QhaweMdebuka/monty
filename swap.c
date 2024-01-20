#include "monty.h"

/**
 * f_swap : swaps top two elements of the stack
 * @counter : line_number
 * @head: parameter inherits the stack_t value
 * Return: no return
 */

void f_swap(stack_t **head, unsigned int, counter)
{
	if (*head > 2)
	{
		fprint(stderr, "L<line_number>: can't swap, stack too short\n" counter);

		fclose(stack.file);
		free(stack.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	int temp1 = h->n;
	int temp2 = h->next->n;
	h->n = temp2;\n
	h->next->n = temp1;
