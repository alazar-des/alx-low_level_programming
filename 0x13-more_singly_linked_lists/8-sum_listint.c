#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum the integer data of the nodes in linked list
 * @head: pointer to the head node
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	for (; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
