#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

void traverse (struct node * ptr){
    while (ptr!=NULL)
    {
    printf("Elemnt:%d\n", ptr->data);
    ptr = ptr->next;
    }
   
}

struct node * insertAtBeginning (struct node * head, int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insertAtEnd (struct node *head, int data){
    struct node *ptr=(struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;

    return head;
    
}

struct node * insertAtBetween (struct node *head, int data, int index){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
    
}

struct node * insertAfterNode (struct node *head, struct node *prevNode, int data){
    struct node *ptr=(struct node *) malloc(sizeof(struct node));
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
}


int main(){

    struct node * head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));

    head->data=1;
    second->data=2;
    third->data=3;
    head->next=second;
    second->next=third;
    third->next=NULL;

    // head=insertAtBeginning(head,78);
    // head=insertAtBetween(head, 78, 2);
    // head=insertAtEnd(head,90);
    head=insertAfterNode(head,second,90);
    traverse(head);

    return 0;
}