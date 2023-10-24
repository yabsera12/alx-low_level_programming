#include "lists.h"

/**
 * pop_listint - A function deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	retn = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (retn);
}