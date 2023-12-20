#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *traverse(struct node *head)
{
    struct node *p = head;
    printf("Forward Traverse: \n");
    while (p->next != NULL)
    {
        printf("Element : %d\n", p->data);
        p = p->next;
    }
    printf("Element : %d\n", p->data);
    printf("Reverse Traverse: \n");
    while (p->prev != NULL)
    {
        printf("Element : %d\n", p->data);
        p = p->prev;
    }
    printf("Element : %d\n", p->data);
    return head;
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev=ptr;
    head = ptr;
    return head;
}

struct node * insertAtLast (struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    ptr->prev=p;
    
    return head;
}

struct node * insertInBetween (struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

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
    ptr->prev=p;
    q->prev=ptr;
    ptr->next=q;
    
    return head;
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->prev = NULL;
    head->next = second;

    second->data = 22;
    second->prev = head;
    second->next = third;

    third->data = 33;
    third->prev = second;
    third->next = fourth;

    fourth->data = 44;
    fourth->prev = third;
    fourth->next = NULL;

    printf("Elements before insertion:\n");
    head=traverse(head);
    printf("Elements after insertion:\n");
    // head=insertAtFirst(head,321);
    // head=insertAtLast(head,123);
    head=insertInBetween(head,111,1);
    head=traverse(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}