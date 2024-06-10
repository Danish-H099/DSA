#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head, *newnode , *temp;

// Creting Linked List
void createLL(){
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
}

// Insert at Begining
void insertBeg(int data){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = head;
    head = newnode;
}

// Insert at the End
void insertEnd(int data){
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = 0;
    while(temp->next != 0){
        temp = temp ->next;
    }
    temp->next = newnode;
}


// Insert at a specific Position
void insertPos(int data, int pos){
    if(pos == 1){
        insertBeg(data);
        return;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    temp = head;
    for(int i=1; i< pos -1; i++){
        temp = temp -> next;
    }
    newnode-> next = temp -> next;
    temp -> next = newnode;
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

    int choice = 1;
    int data, pos;
    while(choice){
        printf("\n\nChoice which Operation you want :\n 1. insertBeg() \n 2. insertEnd()\n 3. insertPos()\n 0 for exit\n");
        scanf("%d", &choice);

        if(choice == 0){
            exit(1);
        }
        printf("Enter the data you want to insert : ");
        scanf("%d", &data);

        switch (choice){
        case 1:
            insertBeg(data);
            break;
        case 2:
            insertEnd(data);
            break;
        case 3:
            printf("Enter Position : ");
            scanf("%d", &pos);
            insertPos(data, pos);
            break;
        default:
            break;
        }
        printf("\nLinked List after the Operation :");
        display();
    }

return 0;
}