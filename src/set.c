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
Set *set_interset(const Set *set_a, const Set *set_b) {
  Set *new_set = init();
  for (int i = 0; i < set_a->length; i++)
    for (int j = 0; j < set_b->length; j++)
      if (set_a->members[i] == set_b->members[j])
        set_insert(new_set, set_a->members[i]);

  return new_set;
}

Set *set_difference(const Set *set_a, const Set *set_b) {
  Set *new_set = init();
  for (int i = 0; i < set_a->length; i++) {
    bool inB = false;

    for (int j = 0; j < set_b->length; j++)
      if (set_a->members[i] == set_b->members[j])
        inB = true;

    if (!inB) {
      set_insert(new_set, set_a->members[i]);
    }
  }
  return new_set;
}

bool is_subset(const Set *set_a, const Set *set_b) {
  for (int i = 0; i < set_a->length; i++) {
    bool inB = false;

    for (int j = 0; j < set_b->length; j++)
      if (set_a->members[i] == set_b->members[j])
        inB = true;

    if (!inB)
      return false;
  }
  return true;
}

bool set_equality(const Set *set_a, const Set *set_b) {
  if (set_a->length != set_b->length)
    return false;
  return is_subset(set_a, set_b);
}

bool is_member(Set *set, int value) {
  for (int i = 0; i < set->length; i++) {
    if (set->members[i] == value) {
      return true;
    }
  }
  return false;
}
