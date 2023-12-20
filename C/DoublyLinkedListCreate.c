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

    traverse(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}