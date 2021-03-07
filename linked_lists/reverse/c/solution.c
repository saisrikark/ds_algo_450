#include <stdlib.h>

#include "linked_list_helpers.h"

void reverse_linked_list(linked_list_t* list) {
    node_t *curr, *prev,  *temp;
    
    curr = list->head;
    prev = temp = NULL;

    while (curr) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    list->head = prev;
}