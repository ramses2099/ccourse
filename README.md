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

