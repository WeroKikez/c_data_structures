#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
};

void Push() {

}

void Insert(struct Node** head) {
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
