#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head, *newnode , *temp, *prev;

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

// Delete at Begining
void deleteBeg(){
    temp = head;
    head = head -> next;
    free(temp);
}

// Delete at the End
void deleteEnd(){
    temp = prev = head;
    while(temp->next != 0){
        prev = temp;
        temp = temp ->next;
    }
    prev->next = 0;
    free(temp);
}


// Delete at a specific Position
void deletePos(int pos){
    if(pos == 1){
        deleteBeg();
        return;
    }
    temp =prev = head;
    for(int i=1; i< pos; i++){
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = temp -> next;
    free(temp);
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
    int pos;
    while(choice){
        printf("\n\nChoice which Operation you want :\n 1. deleteBeg() \n 2. deleteEnd()\n 3. deletePos()\n 0 for exit\n");
        scanf("%d", &choice);

        if(choice == 0){
            exit(1);
        }

        switch (choice){
        case 1:
            deleteBeg();
            break;
        case 2:
            deleteEnd();
            break;
        case 3:
            printf("Enter Position : ");
            scanf("%d", &pos);
            deletePos(pos);
            break;
        default:
            break;
        }
        printf("\nLinked List after the Operation :");
        display();
    }

return 0;
}