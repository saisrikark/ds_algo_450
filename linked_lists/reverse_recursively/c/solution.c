#include <stdlib.h>
#include <stdio.h>

#include "linked_list_helpers.h"

void reverse_list_helper(node_t** head, node_t* prev, node_t* curr) {
    if (!curr) {
        return;
    }

    if (!curr->next) {
        *head = curr;
        curr->next = prev;
        return;
    }

    reverse_list_helper(head, curr, curr->next);
    curr->next = prev;
}

void reverse_linked_list(linked_list_t* list) {
    reverse_list_helper(&list->head, NULL, list->head);
}