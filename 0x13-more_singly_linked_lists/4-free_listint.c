#include "lists.h"

/**
 * free_listint - frees a linked list.
 *
 * @head: Pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	/* Iterate through each node in the list */
	while ((current = head) != NULL)
	{
		/* Move the head to the next node */
		head = head->next;

		/* Free the current node */
		free(current);
	}
}
