#include "array_helpers.h"
#include <stdio.h>

void print_array_max_min_ele(array_t* req_array) {
    #define ele req_array->arr[i]
    int i, max, min;
    
    i = 0;
    max = min = ele;

    ++i;
    for (; i < req_array->arr_len; ++i) {
        if (max < ele) {
            max = ele;
        } 
        else if (min > ele) {
            min = ele;
        }
    }

    printf("\n Max %d Min %d", max, min);
}