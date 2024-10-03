//Implementation of Circular Queue using Arrays

#include <stdio.h>
#include <stdlib.h>
#define MAX 5 //Maximum size of the circular queue 
int front = -1, rear = -1;
int queue[MAX];
//Fuction to check if the circular queue is empty
void isEmpty() {
    if (front == -1 && rear == -1) {
        printf("Circular queue is empty.\n");
    } else {
        printf("Circular queue is not empty.\n");
    }
}
//Function to check if the circular queue is full
int isFull() {
    if((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        return 1;
    } 
     return 0;
}
//Function to enqueue an element into the circular queue
void enqueue(int x) {
    if (isFull()) {
        printf("Circular queue is overflow.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = x;
        printf("Successfully inserted.\n");
    }
}
//Function to dequeue an element from the circular queue
void dequeue() {
       if (front == -1 && rear == -1) {
        printf("Circular queue is underflow.\n");
       } else {
        printf("Deleted element = %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
       }
}
//Function to display element in the Circular queue
void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("Circular queue is empty.\n");
    } else {
        printf("Elements in the circular queue : ");
        i = front;
        while(1) {
            printf("%d ", queue[i]);
            if (i == rear) {
                break;
            }
             i = (i + 1) % MAX;
        }
            printf("\n");
    }
}
//Function to get the size of the circular queue
void size() {
    int size; 
    if (front == -1 && rear == -1) {
        size = 0;
    } else if (front <= rear){
        size = rear - front + 1;
    } else {
        size = MAX - front + rear + 1;
    }
    printf("Circular queue size : %d\n", size);
}
