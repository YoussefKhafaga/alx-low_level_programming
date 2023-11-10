#include "lists.h"
/**
 * add_dnodeint - adds node to the head of list
 * @head: pointer of head
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

