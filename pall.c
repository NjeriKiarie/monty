#include "monty.h"

/**
 * f_pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @head: The head of the stack
 * @counter: The line on which the error occurred
 *
 * Return: Nothing
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
