#include "main.h"
/**
 * f_pall - prints the stack
 * @stack_head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **stack_head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *stack_head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
