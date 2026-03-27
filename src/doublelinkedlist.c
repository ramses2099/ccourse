#include "../include/doublelinkedlist.h"
#include <stdlib.h>

d_node_t *create_new_node(int value) {
  d_node_t *result = malloc(sizeof(d_node_t));
  result->value = value;
  result->next = NULL;
  result->prev = NULL;
  return result;
}

d_node_t *insert_at_head(d_node_t **head, d_node_t *node_to_insert) {
  node_to_insert->next = *head;
  if (*head != NULL) {
    (*head)->prev = node_to_insert;
  }
  *head = node_to_insert;
  return node_to_insert;
}
void insert_after_node(d_node_t *node_to_insert_after, d_node_t *new_node) {
  new_node->next = node_to_insert_after->next;
  if (new_node->next != NULL) {
    new_node->next->prev = node_to_insert_after;
  }
  new_node->prev = node_to_insert_after;
  node_to_insert_after->next = new_node;
}

void remove_node(d_node_t **head, d_node_t *node_to_remove) {
  if (*head == node_to_remove) {
    *head = node_to_remove->next;
    if (*head != NULL) {
      (*head)->prev = NULL;
    }
    return;
  } else {
    // find the previous ndoe in the list
    node_to_remove->prev->next = node_to_remove->next;
    if (node_to_remove->next != NULL) {
      node_to_remove->next->prev = node_to_remove->prev;
    }
  }
  node_to_remove->next = NULL;
  node_to_remove->prev = NULL;
  return;
}
