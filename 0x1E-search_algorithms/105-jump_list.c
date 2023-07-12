#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search algorithm
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev;
    listint_t *current;

    if (list == NULL || size == 0)
        return NULL;

    step = sqrt(size);
    prev = 0;
    current = list;

    while (current->index < size && current->n < value)
    {
        prev = current->index;
        for (size_t i = 0; current->next != NULL && i < step; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

    current = list;
    while (current->index < prev)
        current = current->next;

    while (current != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return current;

        current = current->next;
    }

    return NULL;
}

