//Write a C program to implement different Operations on Stack using Arrays.

 #include <stdio.h>
 #include <stdlib.h>
 #define MAX_SIZE 10
 int stack[MAX_SIZE];
 int top = -1;
 void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is overflow.\n");
    } else {
        stack[++top] = element;
        printf("Successfully pushed.\n");
    }
 }  
    int pop() {
        if (top == -1) {
            printf("Stack is underflow.\n"); 
            return -1;
        } else {
            printf("Popped value = %d\n",stack[top]); 
            return stack[top--];
        }
    }
        void display() {
            if (top == -1) {
                printf("Stack is empty.\n");
            } else {
                printf("Elements of the stack are : "); 
                for (int i = top; i >= 0; i--){
                    printf("%d ", stack[i]);
                }
            printf("\n");
            }
        }   
            int isEmpty() {
                if(top != -1)
                {
                    printf("Stack is not empty.\n");
                }
                else
                {
                    printf("Stack is empty.\n");
                    return (top == -1);
                }
            }
                
                int peek() {
                    if (top == -1) {
                    printf("Stack is underflow.\n");
                    return -1;
                    } else {
                    printf("Peek value = %d\n",stack[top]); 
                    return stack[top];
                    }
}
