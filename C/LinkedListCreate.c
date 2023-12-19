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

    return 0;
}