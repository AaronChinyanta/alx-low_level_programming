#include "lists.h"
#include <stdio.h>
/**
 * sum
 * a linked list.
 * @head: sum of all the data 
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->=next;
	}
	return (add);
}
