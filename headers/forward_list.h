#ifndef _FORWARD_forward_list_H_
#define _FORWARD_forward_list_H_

#include "node.h"

typedef struct
{
    Node *head;
    int size;
} ForwardList;

ForwardList *forward_list_construct();

void forward_list_push_front(ForwardList *l, data_type data);

int forward_list_size(ForwardList *l);

void forward_list_print(ForwardList *l, void (*print_fn)(data_type));

data_type forward_list_find(ForwardList *l, void* val, int (*cmp_fn)(void *, data_type));

data_type forward_list_get(ForwardList *l, int i);

ForwardList *forward_list_reverse(ForwardList *l);

ForwardList *forward_list_sort(ForwardList *l, int (*cmp_fn)(data_type, data_type));

void forward_list_destroy(ForwardList *l);

#endif