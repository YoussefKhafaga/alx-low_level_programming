#include "lists.h"
/**
 * sum_listint - sums node's values
 * @head: head of the list
 * Return: sum of the nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

