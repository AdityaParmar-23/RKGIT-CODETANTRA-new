//Write a C program to implement different Operations on Stack using Linked Lists

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
        struct Node* next;
};
struct Node* top = NULL;
//Gunction to push an element onto tha stack
void push(int x) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            if (newNode == NULL) {
                    printf("Stack overflow.\n");
                    return;
            }
               newNode->data = x;
                  newNode->next = top;
                      top = newNode;
                           printf("Successfully pushed.\n");
}
//Function to pop an element from the stack 
void pop() {
    if (top == NULL) {
           printf("Stack is underflow.\n");
           return;
    }
       struct Node* temp = top;
        top = top->next;
          int poppedValue = temp->data;
          free(temp);
          printf("Popped value = %d\n",poppedValue);
}
//Function to check if the stack is empty 
void isEmpty() {
    if (top == NULL) {
          printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }
}
//function to display elements of the stack
void display() {
    struct Node* current = top;
    if (top == NULL){
        printf("Stack is empty.\n");
    }
    else{
        printf("Elements of the stack are : ");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        
        printf("\n");
    }
}
//Function to get the top element of the stack (peek)
void peek() {
     if (top == NULL) {
        printf("Stack is underflow.\n");
     } else {
        printf("Peek value = %d\n", top->data);
     }
}
    
