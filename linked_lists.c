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

// Inserting a value at Nth position
void Insert(struct Node** head, int pos) {
  struct Node* temp = *head; 
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
  
  Print(list);

  return 0;
}
