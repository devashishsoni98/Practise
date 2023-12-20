#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node * traverse (struct node * head){
    struct node *p=head;
    printf("Forward Traverse: \n");
    while(p->next!=NULL){
        printf("Element : %d\n", p->data);
        p=p->next;
    }
        printf("Element : %d\n", p->data);
    printf("Reverse Traverse: \n");
    while(p->prev!=NULL){
        printf("Element : %d\n", p->data);
        p=p->prev;
    }
        printf("Element : %d\n", p->data);
    return head;
}

struct node * deleteAtFirst (struct node *head){
    struct node *p=head;
    head=head->next;
    head->prev=NULL;
    free(p);
    return head;
}

struct node * deleteAtLast (struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node * deleteInBetween (struct node *head, int index){
    struct node *p=head;
    struct node *q=head->next;
    struct node *r=q->next;
    int i=0;
    while(i<index-1){
        p=p->next;
        q=q->next;
        r=r->next;
        i++;
    }
    p->next=r;
    r->prev=p;
    free(q);
    return head;
}

int main() {

    struct node * head = (struct node *) malloc (sizeof(struct node));
    struct node * second = (struct node *) malloc (sizeof(struct node));
    struct node * third = (struct node *) malloc (sizeof(struct node));
    struct node * fourth = (struct node *) malloc (sizeof(struct node));

    head->data=11;
    head->prev=NULL;
    head->next=second;

    second->data=22;
    second->prev=head;
    second->next=third;

    third->data=33;
    third->prev=second;
    third->next=fourth;

    fourth->data=44;
    fourth->prev=third;
    fourth->next=NULL;

    printf("Elements before insertion:\n");
    head=traverse(head);
    printf("Elements after insertion:\n");
    // head=deleteAtFirst(head);
    // head=deleteAtLast(head);
    head=deleteInBetween(head, 2);
    head=traverse(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}