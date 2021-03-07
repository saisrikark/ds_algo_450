#include "string_helpers.h"
#include <stdio.h>

#define X req_string->str[index]
#define Y req_string->str[req_string->str_len-index-1]

void find_duplicates(string_t* req_string) {
    char hash[127] = {0};
    int i = 0;

    for (; i < req_string->str_len; ++i) {
        if (hash[req_string->str[i]] == 'd') {
            printf("\nDuplicate detected %c", req_string->str[i]);
            hash[req_string->str[i]] = 'p';
        } else {
            hash[req_string->str[i]] = 'd';
        }
    }
}