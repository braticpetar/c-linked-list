#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

// Defining a node

typedef struct Node
{
  int data;
  struct Node* next;
} Node;

// Create a new node
Node *newNode(int);

// Insert functions
Node *preInsert(Node*, int);
Node *postInsert(Node*, int);

// Delete functions
Node *deleteNode(Node*, int);
Node *deleteList(Node*);

// Other functions 
Node *findNode(Node*, int);
void printList(Node*);
int countNodes(Node*);

#endif
