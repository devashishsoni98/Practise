#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coeff;
    int expo;
    struct node *next;
};

struct node *insert(struct node *head, float coeff, int ex)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->coeff = coeff;
    ptr->expo = ex;
    ptr->next = NULL;

    if (head == NULL || ex > head->expo)
    {
        ptr->next = head;
        head = ptr;
    }
    else
    {
        while (p->next != NULL && p->next->expo >= ex)
        {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }
    return head;
}

struct node *create(struct node *head)
{
    int i, n, expo;
    float coeff;
    printf("Enter the Number of Terms: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient of term %d: \n", i + 1);
        scanf("%f", &coeff);
        printf("Enter the exponent of term %d: \n", i + 1);
        scanf("%d", &expo);
        head = insert(head, coeff, expo);
    }
    return head;
}

void print(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%.1fx^%d", p->coeff, p->expo);
        p = p->next;
        if (p != NULL)
        {
            printf(" + ");
        }
        else
        {
            printf("\n");
        }
    }
}

void polyAdd(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo == ptr2->expo)
        {
            head3 = insert(head3, ptr1->coeff + ptr2->coeff, ptr1->expo);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1->expo > ptr2->expo)
        {
            head3 = insert(head3, ptr1->coeff, ptr1->expo);
            ptr1 = ptr1->next;
        }
        else if (ptr1->expo < ptr2->expo)
        {
            head3 = insert(head3, ptr2->coeff, ptr2->expo);
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->coeff, ptr1->expo);
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->coeff, ptr2->expo);
        ptr2 = ptr2->next;
    }
    printf("Added polynomial is: \n");
    print(head3);
}

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("Enter First Polynomial:\n");
    head1 = create(head1);
    printf("Enter First Polynomial:\n");
    head2 = create(head2);

    polyAdd(head1, head2);

    return 0;
}