#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
};

void Push() {

}

// Inserting a value at Nth position
void Insert(struct Node** head, int pos) {
  struct Node* temp = *head; 
}

void Print(struct Node* temp) {
  while (temp != NULL) {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}

int main(void) {
  struct Node* list = NULL;
  return 0;
}
