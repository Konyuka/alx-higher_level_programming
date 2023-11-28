/*
 * File: 10-check_cycle.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise, *rabbit;

	if (list == NULL || list->next == NULL)
		return (0);

	tortoise = list->next;
	rabbit = list->next->next;

	while (tortoise && rabbit && rabbit->next)
	{
		if (tortoise == rabbit)
			return (1);

		tortoise = turtle->next;
		rabbit = rabbit->next->next;
	}

	return (0);
}
