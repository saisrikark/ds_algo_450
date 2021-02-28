#include <stdio.h>

#include "solution.h"

int main() {
    int num, no_bits_set;

    num = no_bits_set = 0;

    printf("\nEnter a number ");
    scanf("%d", &num);

    no_bits_set = find_number_set_bits(num);
    printf("\nNumber of set bits is %d", no_bits_set);
    printf("\n");
}