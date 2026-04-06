#ifndef SET_H
#define SET_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Set Set;

Set *init();
bool is_empty(const Set *set);
void set_insert(Set *set, int member);
void set_print(const Set *set);
// Operation
Set *set_union(const Set *set_a, const Set *set_b);

#endif // !SET_H
