#include "array_helpers.h"
#include <stdio.h>

#define X req_array->arr[index]
#define Y req_array->arr[req_array->arr_len-index-1]

void sort_array_zero_one_two(array_t* req_array) {
    int zeroes, ones, twos, index;
    zeroes = ones = twos = index = 0;
    for (; index < req_array->arr_len; index++) {
        if (!req_array->arr[index]) {
            req_array->arr[zeroes++] = 0;
        } else if (req_array->arr[index] == 1) {
            ones++;
        } else {
            twos++;
        }
    }
    while(ones--) {
        req_array->arr[zeroes++] = 1;
    }
    while(twos--) {
        req_array->arr[zeroes++] = 2;
    }
}