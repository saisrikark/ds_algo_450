#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "string_helpers.h"

void instantiate_string(string_t **req_string) {
    int i, req_str_len;
    i = req_str_len = 0;
    *req_string = NULL;

    printf("\nEnter string length: ");
    scanf("%d", &req_str_len);

    if (!req_str_len) {
        return;
    }

    *req_string = (string_t*)malloc(sizeof(string_t));
    (*req_string)->str = (char*)malloc(sizeof(char) * (req_str_len + 1));
    (*req_string)->str_len = req_str_len;

    printf("\nEnter the string: ");
    scanf("%s", (*req_string)->str);
    (*req_string)->str[req_str_len] = '\0';
}

void display_string(string_t *req_string) {
    printf("\nPrinting the string : %s", req_string->str);    
}