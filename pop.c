#include "monty.h"

/**
 * f_pop - removes the value on top
 * @counter: line_number
 * @head : contains the stacks main flow
 * Return: no return
 */

void f_pop(struct_t **head, unsigned int, counter)
{
	if (*head == NULL)
	{
		fprint(stderr, "L<line_number: can't pop an empty stack\n" counter);
		fclose(stack.file);
		free(stack.content);
		free_stack(*head);
		exit(EXIT_FAILURE);

	}
	*Node temp = h;
	*head = h->next;
	free(temp);
}
