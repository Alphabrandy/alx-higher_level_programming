#include <stdio.h>
#include <stdlib.h>
/**
 * main - dlistint_t structure, implements the print_dlistint function
 *
 * Return: Always EXIT_SUCCESS.
 */
typedef struct dlistint {
    int n;
    struct dlistint *prev;
    struct dlistint *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h) {
    size_t node_count = 0;

    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return node_count;
}

int main() {
    
    dlistint_t *head = malloc(sizeof(dlistint_t));
    head->n = 1;
    head->prev = NULL;
    head->next = malloc(sizeof(dlistint_t));
    head->next->n = 2;
    head->next->prev = head;
    head->next->next = NULL;

    size_t count = print_dlistint(head);
    printf("Number of nodes: %zu\n", count);
    while (head != NULL) {
        dlistint_t *temp = head;
        head = head->next;
        free(temp);
    }

 return:0;
}
