// You can store more than 5 in circular queue but max 5 at a time.

#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int data){
        if((rear+1)%N == front){
            printf("Overflow");
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
            queue[rear] = data;
        }
        else{
            rear=(rear+1)%N;
            queue[rear] = data;
        }
            printf("(%d)",rear);
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
        int i = front;
        while(i!=rear){
            printf("%d <- ",queue[i]);
            i=(i+1)%N;
        }
            printf("%d <- ",queue[i]);
    }
}

int main(){
    int choice=1;
    while(choice){
        int op, data;
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