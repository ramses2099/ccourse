#include "../include/linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void print_list(node_t *head) {
  node_t *ptr = head;
  while (ptr != NULL) {
    printf("%d,", ptr->data);
    ptr = ptr->next;
  }
  printf("->NLL\n");
}

//
node_t *create_new_node(int value) {
  node_t *result = (node_t *)malloc(sizeof(node_t));
  result->data = value;
  result->next = NULL;
  return result;
}
//
void free_list(node_t *head) {
  node_t *ptr = head;
  while (ptr != NULL) {
    free(ptr);
    ptr = ptr->next;
  }
}
//
node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}
//
node_t *find_node(node_t *head, int data) {
  node_t *tmp = head;
  while (tmp != NULL) {
    if (tmp->data == data)
      return tmp;
    tmp = tmp->next;
  }
  return NULL;
}
//
void insert_after_node(node_t *node_to_insert_after, node_t *new_node) {
  new_node->next = node_to_insert_after->next;
  node_to_insert_after->next = new_node;
}
