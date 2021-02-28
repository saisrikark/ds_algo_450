#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "array_helpers.h"
#include "solution.h"

int main() {
    array_t *array;

    instantiate_array(&array);

    if (!array){
        printf("\nUnable to instantiate the array");
        exit(0);
    }

    print_array_max_min_ele(array);
    printf("\n");
}