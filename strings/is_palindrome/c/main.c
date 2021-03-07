#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "string_helpers.h"
#include "solution.h"

int main() {
    string_t *string;

    instantiate_string(&string);

    if (!string){
        printf("\nUnable to instantiate the string");
        exit(0);
    }

    display_string(string);

    if (is_palindrome(string)) {
        printf("\nIt is a palindrome");
    } else {
        printf("\nIt is not a palindrome");
    }

    printf("\n");
}
