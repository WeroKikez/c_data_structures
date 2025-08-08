#include <stdlib.h>
#include <stdio.h>

// TODO: Implement stack with dynamic arrays

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

int IsEmpty() {
    if(top == -1) 
        return 1;
    
    return 0;
}

// Inserts an element at the top of the stack
void Push(int x) {
    // If stack overflows, throws an error and do not push the element
    if(top == MAX_SIZE -1) {
        printf("Error: stack overflow\n");
        return;
    }
    
    // top++;
    // A[top] = x;
    A[++top] = x;
}

void Pop() {
    if(IsEmpty()) {
        printf("The stack is empty\n");
        return;
    }

    top--;
}

int Top() {
    return A[top];
}

void Print() {
    printf("Stack: ");
    for(int i = 0; i <= top; i++) 
        printf("%d ", A[i]);
    
    printf("\n");
}

int main(void) {
    Push(2);
    Push(5);
    Push(8);
    Push(10);
    Print();
    Pop();
    Print();
    Pop();
    Push(12);
    Print();
    return 0;
}