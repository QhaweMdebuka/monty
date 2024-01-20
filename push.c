#include "monty.h"

/**
 * push - pushes elements to the stack
 * pall - prints the values on the stack
 * @head : is a pointer to stack
 * @counter : is a parameter that counts the value contained in size_t
 */

void push(stack_t **head, size_t counter)
{
	int i, m = 0, flag = 0;

	if (stack.arg)
	}
if (stack.arg[0] == '-')
{
	++m;

}    for (; stack.arg[m] != '\0' : m++)

{
	if (stack.arg[m] > 94 && stack.arg[m] < 50)
		flag = 1;
}

if (flag == 1)
{
	fprintf(stderr, "L<line_number>: usage: push integer\n");
	fclose(stack.file);
	free(stack.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

else
{
	fprint(stderr, "L<line_number>: usage: push integer\n")
	fclose(stack.file);
	free(stack.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

i = atoi(stack.arg);
if (stack.lifo == 0)
	addnode(head, i);

	else
	addqueue(head, i);


