#include "set.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  Set *set_a = init();

  if (is_empty(set_a)) {
    printf("Set is empty\n");
  }

  set_insert(set_a, 5);
  set_insert(set_a, 6);
  set_insert(set_a, 7);

  printf("Set a Elements:\n");
  set_print(set_a);

  Set *set_b = init();

  set_insert(set_b, 8);
  set_insert(set_b, 9);
  set_insert(set_b, 3);

  printf("Set b Elements:\n");
  set_print(set_b);

  Set *set_c = set_union(set_a, set_b);
  printf("A union B: \n");
  set_print(set_c);

  printf("end...\n");
  return 0;
}
