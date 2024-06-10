#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node * head;

struct node * createLL(){
    head = 0;
    struct node *newnode , *temp;
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
    return head;
}


// Reversing the Linked List
void reverse(){
    struct node * prev, * cur, *nxt;
    cur = head;
    prev = 0;
    nxt = 0;
    while(cur -> next != 0){
        nxt = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = nxt;
    }
    cur -> next = prev;
    head = cur;
}


//Display Linked List
void display(){
    struct node * current = head;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
}


int main(){
    createLL();
    printf("\nYour Linked List is :");
    display();

    reverse();
    printf("\nYour Reversed Linked List is :");
    display();
return 0;
}