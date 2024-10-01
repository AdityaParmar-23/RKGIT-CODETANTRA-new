//Write a C program to implement different Operations on Queue using Linked Lists

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
        struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
//Function to enqueue (insert) an element into the queue
void enqueue(int x) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            if (newNode == NULL) {
                        printf("Queue is full. Unable to enqueue.\n");
                               return;
            }
               newNode -> data = x;
                  newNode->next = NULL;
                   
                   if(front == NULL) {
                    front = rear = newNode;
                   } else {
                    rear->next = newNode;
                          rear = newNode;
                  }
                  
                  printf("Successfully inserted.\n");
}
// Function to dequeue (remove) an element from the queue
void dequeue() {
    if(front == NULL) {
                printf("Queue is underflow.\n");
                       return;
    }
          struct Node* temp = front;
          front = front->next;
          
             int deletedValue = temp->data;
                 free(temp);
                 
                        printf("Deleted value = %d\n", deletedValue);
}
//Function to display elements of the queue
void display() {
    if (front == NULL) {
                 printf("Queue is empty.\n");
                         return;
    }
    
           struct Node* current = front;
           printf("Elements in the queue : ");
           while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
           }
           printf("\n");
}
      //Function to check if the queue is empty
      void isEmpty() {
           if (front == NULL) {
                       printf("Queue is empty.\n");
           } else {
                       printf("Queue is not empty.\n");
           }
      }
      
          //Function to get the size of the queue
          void size() {
                int count = 0;
                    struct Node* current = front;
                      while (current != NULL) {
                        count++;
                        current = current->next;
                      }
                      printf("Queue size : %d\n", count);
          }
