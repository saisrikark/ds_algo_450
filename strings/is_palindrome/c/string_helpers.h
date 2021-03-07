typedef struct string {
    char *str;
    int str_len;
} string_t;

void instantiate_string(string_t**);
void display_string(string_t*);