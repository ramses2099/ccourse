#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
  int data;
  struct node_t *next;
} node_t;

void print_list(const node_t *head) {
  const node_t *tmp = head;
  while (tmp != NULL) {
    printf("%d ->", tmp->data);
    tmp = tmp->next;
  }
  printf("NULL\n");
}

node_t *create_new_node(int value) {
  node_t *new_node = (node_t *)malloc(sizeof(node_t));
  new_node->data = value;
  new_node->next = NULL;
  return new_node;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}

node_t *find_node(node_t *head, int value) {
  node_t *tmp = head;
  while (tmp != NULL) {
    if (tmp->data == value)
      return tmp;
    tmp = tmp->next;
  }
  return NULL;
}

void insert_after_node(node_t *node_to_insert_after, node_t *new_node) {
  new_node->next = node_to_insert_after->next;
  node_to_insert_after->next = new_node;
}

int get_node_value(node_t *node) {
  if (node == NULL)
    return -1;
  return node->data;
}
