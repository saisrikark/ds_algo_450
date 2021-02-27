#include "array_helpers.h"
#include <stdio.h>

#define X req_array->arr[index]
#define Y req_array->arr[req_array->arr_len-index-1]

void reverse_array(array_t* req_array) {
    int index;
    index = (req_array->arr_len)/2;
    while (index--) {
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }
}