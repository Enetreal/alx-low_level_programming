#include "lists.h"

/**
 * free_listint2 - Frees aa linked list and sets the head pointer to NULL.
 *
 * @head: Pointer to a pointer to the first node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL && *head != NULL)
	{
		/* Initialize current with the head pointer */
		current = *head;

		/* Iterate through the whole list */
		/* while setting the current node to temp */
		while ((temp = current) != NULL)
		{
			/* Move to the next node */
			current = current->next;

			/* Free the current node */
			free(temp);
		}

		/* Set the head pointer to NULL */
		*head = NULL;
	}
}
