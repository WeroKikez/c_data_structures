#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
};

void ReverseList(struct Node** headPointer) {
  struct Node *current, *prev, *next;
  current = *headPointer;
  prev = NULL;

  while(current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  *headPointer = prev;
}

void Push(struct Node** headPointer, int value) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
  temp->data = value;
  temp->next = *headPointer;
  *headPointer = temp;
}

// Insert a value at the end of the list
void Append(struct Node* tempHead, int value) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = NULL;

  while (tempHead->next != NULL) {
    tempHead = tempHead->next;
  }

  tempHead->next = temp;
}

// Inserting a value at Nth position // List: 5, 1, 4, 3; POS: 2 -> 7
void Insert(struct Node** headPointer, int data, int pos) {
  struct Node* tempHead = *headPointer;
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
  
  temp->data = data;

  for(int x = 1; x < pos - 1; x++) {
      tempHead = tempHead->next;
  }

  temp->next = tempHead->next;
  tempHead->next = temp;
}

// 5, 1, 4, 3; 3
void Delete(struct Node* tempHead, int pos) {
  struct Node* temp;

  for(int x = 1; x < pos + 1; x++) {
      temp = tempHead;
      tempHead = tempHead->next;
  }
  
  temp->next = tempHead->next;
  free(tempHead);
}

// Prints elements in a list
void Print(struct Node* temp) {
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  
  printf("NULL\n");
}

int main(void) {
  struct Node* list = NULL;
  
  Push(&list, 6);  
  Push(&list, 2);  
  Push(&list, 3);  
  Push(&list, 5);  
  
  printf("\n");

  printf("Initial List: \n");
  Print(list);

  printf("\n-----------------------\n");
  printf("Insert function\n");

  printf("\nBefore: ");
  Print(list);
  Insert(&list, 7, 3);
  printf("After: ");
  Print(list);

  printf("\n-----------------------\n");
  printf("Append function\n");
 
  printf("\nBefore: ");
  Print(list);
  Append(list, 9);
  printf("After: ");
  Print(list);

  printf("\n-----------------------\n");
  printf("Reverse List function\n");

  printf("\nBefore: ");
  Print(list);
  ReverseList(&list);
  printf("After: ");
  Print(list);

  printf("\n-----------------------\n");
  printf("Delete function\n");

  printf("\nBefore: ");
  Print(list);
  Delete(list, 3);
  printf("After: ");
  Print(list);

  printf("\n");

  return 0;
}
