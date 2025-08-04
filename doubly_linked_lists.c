#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

void InsertAtHead(struct Node** headPointer, int value) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));

  temp->prev = NULL;
  temp->data = value;
  temp->next = *headPointer;
  
  if(temp->next != NULL)
    (*headPointer)->prev = temp;

  *headPointer = temp;
}

void Print(struct Node* tempHead) {
  printf("Forward\n");     

  printf("NULL -> ");
  while(tempHead != NULL) {
    printf("%d -> ", tempHead->data);
    tempHead = tempHead->next;
  }

  printf("NULL\n");
  printf("\n");
}

void ReversePrint(struct Node* tempHead) {
  // Empty list
  if(tempHead == NULL)
    return;
  
  // Going to last element in the list
  while(tempHead->next != NULL) {
    tempHead = tempHead->next;
  }

  // Print elements in reverse order  
  printf("Backward\n");

  printf("NULL <- ");
  while(tempHead != NULL) {
    printf("%d <- ", tempHead->data);
    tempHead = tempHead->prev;
  }

  printf("NULL\n");
  printf("\n");
}

int main(void) {
  struct Node* list = NULL;
  
  InsertAtHead(&list, 4);
  InsertAtHead(&list, 6);
  InsertAtHead(&list, 3);
  InsertAtHead(&list, 9);

  printf("After inserting\n");

  // 9 -> 3 -> 6 -> 4

  Print(list);

  ReversePrint(list);
  
  return 0;
}
