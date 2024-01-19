#include "main.h"
/**
 * f_pop - prints the top
 * @stack_head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **stack_head, unsigned int counter)
{
	stack_t *h;

	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	h = *stack_head;
	*stack_head = h->next;
	free(h);
}
