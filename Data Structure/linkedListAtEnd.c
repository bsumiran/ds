// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* at_end(struct node* head , int d){
    
    struct node* ptr,*temp;
    ptr= head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;
    
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    
    return head;
    
}

int main() {
    struct node* head;
    
    head = malloc(sizeof(struct node));
    
    head->data = 50;
    head->link = NULL;
    
    struct node* node1 = malloc(sizeof(struct node));
    node1->data =60;
    node1->link = NULL;
    
    head->link = node1;
    
    int data=70;
    
    head=at_end(head,data);
    
    while (head != NULL){
        printf("%d  \n ",head->data);
        head = head->link;
    }
    

    return 0;
}