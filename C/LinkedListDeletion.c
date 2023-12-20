#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * deleteAtFirst (struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node * deleteAtIndex (struct node *head, int index){
    struct node *p=head;
    struct node *q=head->next;

    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    
    p->next=q->next;
    free(q);


    return head;
}

struct node * deleteAtLast (struct node *head) {
    struct node *p=head;
    struct node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

    return head;
}

struct node * deleteAtGivenValue(struct node *head, int value){
    struct node *p=head;
    struct node *q=head->next;

    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if (q->data == value)
    {
        p->next=q->next;
        free(q);
    }else{
        printf("element not found!\n");
    }
    return head;    
}

int main()
{

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));

    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));

    struct node * fourth;
    fourth = (struct node *) malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 16;
    third->next = fourth;
    fourth->data=77;
    fourth->next=NULL;

   traverse(head);
//    head=deleteAtFirst(head);
//    head=deleteAtIndex(head,1);
//    head=deleteAtLast(head);
   printf("After Deletion:\n");
   head=deleteAtGivenValue(head,16);
   traverse(head);

    return 0;
}