#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ctr = 0;
	listint_t *temp_h;

	if (!head) /* EMPTY list */
		return (NULL);
	temp_h = head;
	while (temp_h)
	{
		if (ctr == index)
			return (temp_h);
		temp_h = temp_h->next;
		ctr++;
	}
	return (NULL);

}

