#include "linked_list.h"

void printMenu()
{
  printf("\n##############################\n");
  printf("  _      _       _            _   _      _     _       \n"
       " | |    (_)     | |          | | | |    (_)   | |      \n"
       " | |     _ _ __ | | _____  __| | | |     _ ___| |_ ___ \n"
       " | |    | | '_ \\| |/ / _ \\/ _` | | |    | / __| __/ __|\n"
       " | |____| | | | |   <  __/ (_| | | |____| \\__ \\ |_\\__ \\\n"
       " |______|_|_| |_|_|\\_\\___|\\__,_| |______|_|___/\\__|___/\n");
  printf("\n##############################\n");
  printf("\n ##### Options #####\n");
  printf("1. Insert at the beginning\n");
  printf("2. Insert at the end\n");
  printf("3. Delete a node\n");
  printf("4. Delete a list\n");
  printf("5. Find a node\n");
  printf("6. Print the list\n");
  printf("7. Count the nodes in a list\n");
  printf("8. Exit\n");
  printf("Chose an option: ");
}

void run()
{
  Node *head = NULL;
  int choice, value;

  while (1)
  {
    printMenu();
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
	printf("Enter the value to insert: ");
	scanf("%d", &value);
	head = preInsert(head, value);
	break;

      case 2: 
	printf("Enter the value to insert: ");
	scanf("%d", &value);
	head = postInsert(head, value);
	break;

      case 3:
	printf("Node with which value do you want to delete: ");
	scanf("%d", &value);
	head = deleteNode(head, value);
	break;

      case 4:
	head = deleteList(head);
	printf("List deleted!\n");
	break;

      case 5:
	printf("What node do you want to find?");
	scanf("%d", &value);
	head = findNode(head, value);
	break;

      case 6:
	printList(head);
	break;

      case 7:
	printf("Number of nodes in the provided list is %d\n", countNodes(head));
	break;

      case 8:
	printf("Exiting...\n");
	deleteList(head);
	exit(0);
	break;

      default:
	printf("Invalid option, please try again\n");
    }
  }
}

int main()
{
  run();

  return 0;

}
