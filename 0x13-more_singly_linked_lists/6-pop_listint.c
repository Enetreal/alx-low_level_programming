#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: Pointer to a pointer to the first node
 *
 * Return: The data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp, *next_node;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Store the address of the current head node in temp */
	temp = *head;

	/* Get the address of the next node */
	next_node = temp->next;

	/* Get the data from the first node */
	data = temp->n;

	/* Free the first node */
	free(temp);

	/* Update the head pointer to point to the second node */
	*head = next_node;

	/* Return the data of the first node */
	return (data);
}
