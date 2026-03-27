#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// TYPE DEF
typedef struct node node_t;
// FUNCITON API
void print_list(node_t *head);
node_t *create_new_node(int value);
void free_list(node_t *head);
node_t *insert_at_head(node_t **head, node_t *node_to_insert);
node_t *find_node(node_t *head, int data);
void insert_after_node(node_t *node_to_insert_after, node_t *new_node);
#endif // !LINKED_LIST_H
