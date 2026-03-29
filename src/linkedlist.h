#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;
void print_list(const node_t *head);
node_t *create_new_node(int value);
node_t *insert_at_head(node_t **head, node_t *node_to_insert);
node_t *find_node(node_t *head, int value);
void insert_after_node(node_t *node_to_insert_after, node_t *new_node);
int get_node_value(node_t *node);

#endif // !LINKED_LIST_H
