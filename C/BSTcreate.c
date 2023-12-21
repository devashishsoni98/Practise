#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * newNode (int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

struct node * create(struct node * root, int data){
    if(root==NULL){
        root = newNode(data);
    }else if(data<=root->data){
        root->left=create(root->left, data);
    }else{
        root->right=create(root->right, data);
    }
    return root;
}

void inorder (struct node * root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

int main(){

    struct node * root = NULL;
    root = create(root,10);
    root = create(root,20);
    root = create(root,30);
    root = create(root,40);

    inorder(root);

    return 0;
}