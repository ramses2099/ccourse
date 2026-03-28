#ifndef QUEUE_H
#define QUEUE_H

#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define QUEUE_EMPTY INT_MIN

typedef struct queue queue;

queue *q_create(int max_size);
void q_destroy(queue *q);
bool q_empty(queue *q);
bool q_full(queue *q);
bool q_enqueue(queue *q, int value);
int q_dequeue(queue *q);
int q_head(queue *q);

#endif // !QUEUE_H
