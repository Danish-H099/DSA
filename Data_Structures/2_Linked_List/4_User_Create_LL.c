#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head, *newnode , *temp;

void createLL(){
    head = 0;
    
    int choice = 1;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you wanna add another node??\npress 1 for yes and 0 for no :");
        scanf("%d", &choice);
    }
}

//Display Linked List
void display(){
    temp = head;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


int main(){
    createLL();
    printf("\nYour Linked List is :");
    display();
return 0;
}