#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

// Create Linked List
struct node * createNode(int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

//Display Linked List
void display(struct node * head){
    struct node * current = head;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
}

int main(){
    struct node * head = createNode(13);
    head->next = createNode(18);
    head->next->next = createNode(69);
    head->next->next->next = createNode(7);
    
    display(head);
return 0;
}