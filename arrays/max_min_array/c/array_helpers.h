typedef struct array {
    int *arr;
    int arr_len;
} array_t;

void instantiate_array(array_t**);
void display_array(array_t*);