#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds node to the end
 * @head: head of the list
 * @n: integer
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = malloc(sizeof(listint_t));

	if (!new || !temp)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->n = n;
		temp->next = NULL;
		*head = temp;
		return (*head);

	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	new->next = NULL;
	new->n = n;
	temp->next = new;
	return (temp);
}

