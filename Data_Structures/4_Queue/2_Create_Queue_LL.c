#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=0, *rear=0, *temp;

void enqueue(int data){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = 0;
    if(front == 0){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    if(front == 0){
        printf("Queue is Empty");
    }
    else{
        temp=front;
        front = front->next;
        free(temp);
    }
}

void peek(){
    if(front == 0){
        printf("Queue is Empty");
    }
    else{
        printf("\nThis element is in the front :%d",front->data);
    }
}

void display(){
    temp = front;
    if(front == 0){
        printf("Queue is Empty");
    }
    else{
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->next;
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