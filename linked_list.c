#include "linked_list.h"

// Create a new node
Node *newNode(int data)
{
  Node *tmp = (Node *)malloc(sizeof(Node)); // Allocacte the memory for the node
  
  if (!tmp) // Check for malloc failure
  {
    perror("Memory allocation failed");
    exit(EXIT_FAILURE);
  }

  tmp->data = data; //Assign the data

  tmp->next = NULL; //Initialize the pointer

  return tmp;
}

// Insert a new node at the beggining
Node *preInsert(Node *head, int data)
{
  Node *tmp = newNode(data);

  tmp->next = head;

  return tmp;
}

// Insert a new node at the end
Node *postInsert(Node *head, int data)
{
  Node *h1 = head;
  Node *tmp = newNode(data);

  if (head == NULL) return tmp;

  while (h1->next != NULL)
  {
    h1 = h1->next;
  }

  h1->next = tmp;

  return head;
}

// Delete node with specific value
Node *deleteNode(Node *head, int value)
{
  if (head == NULL) return NULL;

  if (head->data == value)
  {
    Node *newHead = head->next;
    free(head);
    return newHead;
  }

  Node *slow = head;
  Node *fast = head->next;

  while (fast != NULL)
  {
    if (fast->data == value)
    {
      slow->next = fast->next;
      free(fast);
      return head;
    }
    slow = fast;
    fast = fast->next;
  }

  return head;
}

// Delete the whole list
Node *deleteList(Node *head)
{
  Node *tmp;

  while (head != NULL)
  {
    tmp = head->next;
    free(head);
    head = tmp;
  }

  return NULL;
}

// Finds a node with specified value
Node *findNode(Node *head, int value)
{
  while (head != NULL)
  {
    if (head->data == value)
    {
      return head;
    }
    head = head->next;
  }

  fprintf(stderr, "Node with value %d not found!\n", value);
  return NULL;
}

// Prints the list
void printList(Node *head)
{
  while (head != NULL)
  {
    printf(" %d ->", head->data);
    head = head->next;
  }

  printf(" NULL\n");
}

// Returns the number of nodes in the list
int countNodes(Node *head)
{
  int count = 0;

  while (head != NULL)
  {
    head = head->next;
    count++;
  }

  return count;
}































