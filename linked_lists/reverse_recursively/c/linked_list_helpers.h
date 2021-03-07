typedef struct node {
    int num;
    struct node *next;
} node_t;

typedef struct linked_list {
    node_t *head;
    int len;
} linked_list_t;

node_t* create_node(int);
linked_list_t* construct_linked_list(int, int*);
void display_linked_list(linked_list_t*);