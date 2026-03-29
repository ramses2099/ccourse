# ccourse
Course of c programming

## Data Structure
1. Queue
```

#include "queue.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {

  queue *q1 = q_create(5);
  q_enqueue(q1, 56);
  q_enqueue(q1, 78);
  q_enqueue(q1, 26);
  q_enqueue(q1, 988);
  q_enqueue(q1, 13);

  /*
  int i = q_dequeue(q1);
  printf("%d\n", i);
  printf("HEAD %d\n", q_head(q1));
  */

  int t;
  while ((t = q_dequeue(q1)) != QUEUE_EMPTY) {
    printf("t = %d\n", t);
  }

  printf("end...\n");
  return 0;
}
```



1. Linked list
```
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
```

1. Stack
