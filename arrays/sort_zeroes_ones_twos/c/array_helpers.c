#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"

void instantiate_array(array_t **req_array) {
    int i, req_arr_len;
    i = req_arr_len = 0;
    *req_array = NULL;

    printf("\nEnter array length: ");
    scanf("%d", &req_arr_len);

    if (!req_arr_len) {
        return;
    }

    *req_array = (array_t*)malloc(sizeof(array_t));
    (*req_array)->arr = (int*)malloc(sizeof(int) * req_arr_len);
    (*req_array)->arr_len = req_arr_len;

    printf("\nEnter values: ");
    for(; i < (*req_array)->arr_len; ++i) {
        scanf("%d", &((*req_array)->arr[i]));
    }
}

void display_array(array_t *req_array) {
    int i = 0;
    printf("\nPrinting the array :");
    for (; i < req_array->arr_len; ++i) {
        printf("%d ", req_array->arr[i]);
    }
}