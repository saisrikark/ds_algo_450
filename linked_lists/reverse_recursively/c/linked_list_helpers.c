#include <stdlib.h>
#include <stdio.h>

#include "linked_list_helpers.h"

node_t* create_node(int req_num) {
    node_t *new_node;
    new_node = (node_t*)malloc(sizeof(node_t));
    new_node->num = req_num;
    new_node->next = NULL;
    return new_node;
}

linked_list_t* construct_linked_list(int arr_len, int *arr) {
    int  i;
    linked_list_t *list;
    node_t *curr, *prev, *new_node, *head;

    i = 0;
    list = NULL;
    curr = prev = new_node = NULL;

    if(!arr_len) {
        return NULL;
    }

    list = (linked_list_t*)malloc(sizeof(linked_list_t));
    prev = create_node(arr[0]);
    list->head = prev;
    list->len = arr_len;
    ++i;

    for (; i < arr_len; ++i) {
        curr = create_node(arr[i]);
        prev->next = curr;
        prev = curr;
    }

    return list;
}

void display_linked_list(linked_list_t *list) {
    node_t *curr;
    curr = list->head;
    
    printf("\n");
    while(curr) {
        printf("%d ", curr->num);
        curr = curr->next;
    }
}