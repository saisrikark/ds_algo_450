#include "string_helpers.h"
#include <stdio.h>

#define X req_string->str[index]
#define Y req_string->str[req_string->str_len-index-1]

int is_palindrome(string_t* req_string) {
    int index;
    index = (req_string->str_len)/2;
    while (index--) {
        if (X != Y) {
            return 0;
        }
    }
    return 1;
}
