#include "linkedlist.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  node_t *head = NULL;
  node_t *tmp = NULL;

  int i = 0;
  for (i = 0; i <= 20; i++) {
    tmp = create_new_node(i);
    insert_at_head(&head, tmp);
    head = tmp;
  }

  tmp = find_node(head, 13);
  printf("found node with value %d\n", get_node_value(tmp));

  insert_after_node(tmp, create_new_node(25));

  print_list(head);

  printf("end...\n");
  return 0;
}
