#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: Pointer to a pointer to the first node
 * @n: Integer value to add in the new node
 *
 * return: Address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	/* Allocate memory for the new code */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set integer value for the new node */
	new_node->n = n;
	new_node->next = NULL;

	current = *head;

	/* If the list is empty, make the new node the head */
	if (current == NULL)
		*head = new_node;
	else
	{
		/* Traverse the list to find the last node */
		while (current->next != NULL)
			current = current->next;

		/*Place the new node at the end of the list */
		current->next = new_node;
	}
	return (*head); /* Return the address of the new element */
}
