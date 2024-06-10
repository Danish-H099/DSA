#include <stdio.h>

struct node{
    int data;
    struct node *next;
};



void enqueue(int data){

}

void dequeue(){

}

void peek(){

}

void display(){

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