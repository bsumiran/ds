// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node* link;
};

struct node* add_beg(struct node* head, int d){
    struct node* ptr = malloc(sizeof(struct node));
    
    ptr->data = d;
    ptr->link = head ;
    
    head = ptr; // new node is pointing to the head 
    return head;
}

int main() {
    struct  node* head =malloc(sizeof(struct node));
    head->data = 45;
    head->link=NULL;
    
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data =66;
    ptr-> link = NULL;
    
    head->link = ptr;
    
    int data = 69;
    
    head = add_beg(head, data);
    ptr = head;// second node (i.e node having data 66) is pointing to the head 
    while ( ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    
  

    return 0;
}