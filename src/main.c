#include "../include/linkedlist.h"
#include <stdlib.h>

int main(void) {
  node_t *head = NULL;
  node_t *tmp;

  for (int i = 0; i < 25; i++) {
    tmp = create_new_node(i);
    head = insert_at_head(&head, tmp);
  }
  //
  print_list(head);
  //
  free(head);

  return 0;
}
