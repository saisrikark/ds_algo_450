#include "string_helpers.h"
#include <stdio.h>

#define X req_string->str[index]
#define Y req_string->str[req_string->str_len-index-1]

void reverse_string(string_t* req_string) {
    int index;
    index = (req_string->str_len)/2;
    while (index--) {
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }
}