#include "main.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @stack_head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **stack_head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *stack_head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
