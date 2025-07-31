#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
};

void Push(struct Node** headPointer, int value) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
  temp->data = value;
  temp->next = *headPointer;
  *headPointer = temp;
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

void Print(struct Node* temp) {
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  
  printf("\n");
}

int main(void) {
  struct Node* list = NULL;
  
  Push(&list, 6);  
  Push(&list, 2);  
  Push(&list, 3);  
  Push(&list, 5);  

  // 5, 1, 4, 3
  printf("Before: ");
  Print(list);
  Insert(&list, 7, 2);
  printf("After: ");
  Print(list);

  return 0;
}
