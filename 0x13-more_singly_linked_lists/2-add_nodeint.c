#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 *
 * @head: pointer to a pointer to the first node
 * @n: Integer value to add in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
		new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* set the integer value for the new node */
		new_node->n = n;

	/* Link the new node to the current head */
		new_node->next = *head;

	/* Update the head to point to the new node */
		*head = new_node;

	return (*head); /* return the address of the new element */
}
