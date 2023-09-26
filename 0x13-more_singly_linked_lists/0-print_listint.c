#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	/* return ) as number of nodes when h is null */
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to next node*/
		h = h->next;
		/*count nuber of nodes*/
		node_count++;
	}

	/*print last node*/
	printf("%d\n", h->n);

	return (node_count);
}
