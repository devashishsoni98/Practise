#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * traverse(struct node *head){
    struct node *p=head;
    do
    {
        printf("Elements: %d\n", p->data);
        p=p->next;
    } while (p!=head);
    
    return head;
}

struct node * insertAtFirst (struct node *head, int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    

    return head;
}
struct node * insertAtLast (struct node *head, int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    

    return head;
}

struct node * insertInBetween (struct node *head, int data, int index){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head;
    struct node *q=head->next;
    int i=0;

    while (i<index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=ptr;
    ptr->next=q;
    
    return head;
}

int main() {
  
    struct node *head=(struct node *) malloc(sizeof(struct node));
    struct node *second=(struct node *) malloc(sizeof(struct node));
    struct node *third=(struct node *) malloc(sizeof(struct node));
    struct node *fourth=(struct node *) malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=head;

    printf("LinkedList before Insert:\n");
    traverse(head);
    printf("LinkedList after Insert:\n");
    // head=insertAtFirst(head, 22);
    // head=insertAtLast(head, 22);
    head=insertInBetween(head, 22, 2);
    traverse(head);

    return 0;
}