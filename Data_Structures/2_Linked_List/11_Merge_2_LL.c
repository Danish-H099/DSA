#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node  *newnode , *temp, *first, *last;

// Merge Linked Lists
struct node  * merge(struct node * head1, struct node * head2){
    struct node *first, *last;
    if (head1->data < head2->data){
        first = last = head1;
        head1 = head1->next;
        last ->next = 0;
    }
    else{
        first = last = head2;
        head2 = head2->next;
        last ->next = 0;
    }
    while ( head1 != 0 && head2 != 0){
        if (head1->data < head2->data){
            last->next = head1;
            last = head1;
            head1 = head1->next;
            last ->next = 0;
        }
        else{
            last->next = head2;
            last = head2;
            head2 = head2->next;
            last ->next = 0;;
    }
    }
    if(head1 !=0){
        last -> next = head2;
    }
    else{
        last -> next = head1;
    }
    return first;
    
}


// Create Linked List
struct node  * createLL(struct node * head){
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
    return head;
}



//Display Linked List
void display(struct node * head){
    temp = head;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


int main(){
    struct node *head1, *head2, *first;
    printf("Create Linked List 1 :\n");
    head1 = createLL(head1);
    printf("\nCreate Linked List 2 :\n");
    head2 = createLL(head2);

    printf("\nLinked List 1 : ");
    display(head1);
    printf("\n\nLinked List 2 : ");
    display(head2);

    first = merge(head1, head2);
    printf("\n\n Merged List : ");
    display(first);

return 0;
}