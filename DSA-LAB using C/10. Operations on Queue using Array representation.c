//Write a C program to implement different Operations on Queue using Array representation

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
//Funtion to check if the queue is empty
void isEmpty(){
    if ((front == -1 && rear == -1) || front>rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }
}
//Function to check the size of the queue
void size() {
         if(front == -1 && rear == -1) {
            printf("Queue size : 0\n");
         } else {
            printf("Queue size : %d\n", rear - front + 1);
         }
}
//function to enqueue an element into the queue
void enqueue(int element) {
    if (rear == MAX_SIZE -1) {
        printf("Queue is overflow.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = element;
        printf("Successfully inserted.\n");
    }
}
//function to dequeue an element from the queue
void dequeue(){
    if (front ==  -1 || front > rear) {
        printf("Queue is underflow.\n");
    } else {
        printf("Deleted element = %d\n", queue[front++]);
    }
}
//Function to display the elements in the queue
void display() {
       if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
       } else {
        printf("Elements in the queue : ");
        for (int i = front; i<=rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
       }
    
}
