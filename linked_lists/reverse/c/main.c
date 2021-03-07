#include <stdio.h>

#include "linked_list_helpers.h"
#include "solution.h"

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_len = 10;

    linked_list_t *list = construct_linked_list(arr_len, arr);
    
    display_linked_list(list);
    printf("\nReversing Linked List");
    reverse_linked_list(list);
    display_linked_list(list);
    printf("\n");

    return 0;
}