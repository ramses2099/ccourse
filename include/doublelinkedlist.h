#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

struct d_node {
  int value;
  struct d_node *next;
  struct d_node *prev;
};
typedef struct d_node d_node_t;

void printlist(d_node_t *head);
d_node_t *create_new_node(int value);
d_node_t *insert_at_head(d_node_t **head, d_node_t *node_to_insert);
void insert_after_node(d_node_t *node_to_insert_after, d_node_t *new_node);

#endif // !DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H
