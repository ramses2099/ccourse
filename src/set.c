#include "set.h"

typedef struct Set {
  int *members;
  int length;
} Set;

Set *init() {
  Set *new_set = (Set *)malloc(sizeof(Set));
  if (new_set == NULL) {
    fprintf(stderr, "No memeroy allocate for set");
    return NULL;
  }
  new_set->length = 0;
  new_set->members = (int *)malloc(sizeof(int));
  return new_set;
}

bool is_empty(const Set *set) { return (set->length == 0); }

void set_insert(Set *set, int member) {
  bool in_set = false;

  for (int i = 0; i < set->length; i++)
    if (set->members[i] == member)
      in_set = true;

  if (!in_set) {
    set->members = realloc(set->members, sizeof(int) * (set->length + 1));
    set->members[set->length] = member;
    set->length++;
  }
}

void set_print(const Set *set) {
  for (int i = 0; i < set->length; i++) {
    printf("%d->", set->members[i]);
  }
  printf("NULL\n");
}

Set *set_union(const Set *set_a, const Set *set_b) {
  Set *new_set = init();
  for (int i = 0; i < set_a->length; i++) {
    set_insert(new_set, set_a->members[i]);
  }

  for (int i = 0; i < set_b->length; i++) {
    set_insert(new_set, set_b->members[i]);
  }

  return new_set;
}
