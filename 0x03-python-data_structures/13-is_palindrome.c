#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
        int n;
        struct listint_s *next;
} listint_t;

int aux_palind(listint_t **head, listint_t *end);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */

/**
 * aux_palind - funct to know if it is palindrome
 * @head: head list
 * @end: end list
 */
int aux_palind(listint_t **head, listint_t *end)
{
        if (end == NULL)
                return (1);
        if (aux_palind(head, end->next) && (*head)->n == end->n)
        {
                *head = (*head)->next;
                return (1);
        }
        return (0);
}

/**
 * is_palindrome - recursive palind or not
 * @head: head list
 * Return: 0 if it is not a palindrome
 * 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
        if (head == NULL || *head == NULL)
                return (1);
        return (aux_palind(head, *head));
}

