#include "lists.h"
/**
*dlistint_len- a function that returns the number of elements in a linked list
*@h: list to check number of elements
* Return: Number of elements in list
*/

size_t dlistint_len(const dlistint_t *h)
{
const	dlistint_t *temp;
temp = h;
	while (temp)
	{
		return (temp->n);
		temp = temp->next;
	}
return (temp->n);
}
