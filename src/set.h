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
Set *set_interset(const Set *set_a, const Set *set_b);
Set *set_difference(const Set *set_a, const Set *set_b);
bool is_subset(const Set *set_a, const Set *set_b);
bool set_equality(const Set *set_a, const Set *set_b);
bool is_member(Set *set, int value);

#endif // !SET_H
