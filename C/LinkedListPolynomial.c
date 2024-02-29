#include <stdio.h>
#include <stdlib.h>

struct node {
    float coeff;
    int expo;
    struct node * next;
};

struct node * insert(struct node* head, float coeff, int ex){
    struct node * p=head;
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->coeff=coeff;
    ptr->expo=ex;
    ptr->next=NULL;

    if(head == NULL || ex > head->expo){
        ptr->next=head;
        head=ptr;
    }else{
        while(p->next!=NULL && p->next->expo >= ex){
            p=p->next;
        }
        ptr->next=p->next;
        p->next=ptr;
    }

    return head;
}

struct node * create(struct node * head){
int i,n, expo;
float coeff;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter coeff of term %d: \n", i+1);
        scanf("%f", &coeff);
        printf("Enter expo of term %d: \n", i+1);
        scanf("%d", &expo);
        head = insert(head, coeff, expo);
    }
    return head;
}

void print (struct node *head){
    struct node *p=head;
    while(p!=NULL){
        printf("%.1fx^%d", p->coeff, p->expo);
        p=p->next;
        if(p!=NULL){
            printf(" + ");
        }else{
            printf("\n");
        }
    }
}

int main() {
    struct node * head=NULL;
    head=create(head);
    print(head);
    return 0;
}