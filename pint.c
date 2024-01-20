#include "monty.h"

/**
 * f_pint - prints the top value
 * @head : is a pointer to value in stack_t
 * @counter : value that must be counted
 *
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (stack_t == NULL)
	{
		fprint(stderr, "L<line_number: can't pint, stack empty\n");
		fclose(stack.file);
		free(stack.content);
		free_stack(*head);

		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head));
}

