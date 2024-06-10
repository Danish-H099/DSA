#include <stdio.h>

#define N 5
int stack[N];
int top = -1;

void push(int data){
    if(top==N-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top]=data;
    }
}


void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Deleted element is %d", stack[top]);
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        printf("%d", stack[top]);
    }
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d ", stack[i]);
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