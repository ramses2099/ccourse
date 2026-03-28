#include "queue.h"

typedef struct queue {
  int *values;
  int head, tail, num_entries, size;
} queue;

queue *q_create(int max_size) {
  queue *q = malloc(sizeof(queue));
  q->head = 0;
  q->size = max_size;
  q->tail = 0;
  q->num_entries = 0;
  q->values = malloc(sizeof(int) * max_size);
  return q;
}
void q_destroy(queue *q) {
  free(q->values);
  free(q);
}
bool q_empty(queue *q) { return (q->num_entries == 0); }
bool q_full(queue *q) { return (q->num_entries == q->size); }
int q_head(queue *q) { return q->head; }
bool q_enqueue(queue *q, int value) {
  if (q_full(q)) {
    return false;
  }
  q->values[q->tail] = value;
  q->num_entries++;
  q->tail = (q->tail + 1) % q->size;

  return true;
}
//
int q_dequeue(queue *q) {
  if (q == NULL || q_empty(q)) {
    return QUEUE_EMPTY;
  }
  int result = q->values[q->head];
  q->head = (q->head + 1) % q->size;
  q->num_entries--;

  return result;
}
