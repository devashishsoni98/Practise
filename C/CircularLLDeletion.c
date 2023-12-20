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

struct node * deleteAtFirst (struct node *head){
    struct node *p= head;
    struct node *q= head->next;

    while(q->next!=head){
        q=q->next;
    }
    q->next=head->next;
    head=p->next;
    free(p);
    return head;
}

struct node * deleteAtLast (struct node * head){
    struct node *p=head;
    struct node *q=head->next;

    while (q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    
    return head;
}

struct node * deleteInBetween (struct node * head, int index){
    struct node *p=head;
    struct node *q=head->next;
    int i=0;

    while (i<index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    
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

    printf("Elements before deletion:\n");
    traverse(head);
    printf("Elements after deletion:\n");
    // head=deleteAtFirst(head);
    // head=deleteAtLast(head);
    head=deleteInBetween(head, 2);
    traverse(head);


    return 0;
}