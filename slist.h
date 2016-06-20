#ifndef SLIST_H
#define SLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct slist_node 
{
    void *data;
    struct slist_node *next;
};

void insert_slist_front(struct slist_node **head, void *new_data);
void insert_slist_end(struct slist_node **head, void *new_data);
void insert_slist_after(struct slist_node *prev_node, void *new_data);

//void remove_node(struct slist_node **head, int data);

int slist_size(struct slist_node *head);

void print_slist_int(void *data);
void print_slist(struct slist_node *head, void (* fptr)(void *));

#endif