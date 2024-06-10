#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int data){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}



void pop(){
    if(top==0){
        printf("Stack Underflow");
    }
    else{
        printf("Deleted element is %d", top->data);
        free(top);
        top = top->next;
    }
}

void peek(){
    if(top==0){
        printf("Stack is Empty");
    }
    else{
        printf("%d", top->data);
    }
}

void display(){
    struct node * temp; 
    temp = top; 
    if(top ==0){ 
        printf("stack is empty"); 
    } 
    else{ 
        while(temp!=0){ 
        printf("%d ", temp->data); 
        temp=temp->next; 
        } 
    } 
}


int main(){
    int choice=1;
    while(choice){
        int op, data;;
        printf("\n\nChoose the operation:\n1. Push()\n2. Pop()\n3. peek() \n0. To exit\n");
        scanf("%d",&op);
        if(op==0){
            break;
        }
        switch(op){
            case 1:
                printf("Enter data : ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
        }
        printf("\nYou Stack after the Operation : ");
        display();
    }
    
return 0;
}