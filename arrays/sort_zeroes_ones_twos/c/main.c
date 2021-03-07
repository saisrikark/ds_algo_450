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

    display_array(array);
    sort_array_zero_one_two(array);
    printf("\nSorting complete");
    display_array(array);
    printf("\n");
}