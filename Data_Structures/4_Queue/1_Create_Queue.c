#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int data){
        if(rear == N-1){
            printf("Overflow");
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
            queue[rear] = data;
        }
        else{
            rear++;
            queue[rear] = data;
        }
}

void dequeue(){
        if(front == -1 && rear == -1){
            printf("Queue is empty");
        }
        else if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
}

void peek(){
    if(front == -1 && rear == -1){
            printf("Queue is empty");
    }
    else{
        printf("Element at the front is : %d", queue[front]);
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        for (int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    int choice=1;
    while(choice){
        int op, data;;
        printf("\n\nChoose the operation:\n1. Enqueue()\n2. Dequeue()\n3. peek() \n0. To exit\n");
        scanf("%d",&op);
        if(op==0){
            break;
        }
        switch(op){
            case 1:
                printf("Enter data : ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
        }
        printf("\nYour Queue after the Operation : ");
        display();
    }
return 0;
}