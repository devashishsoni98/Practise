#include<stdio.h>
#include<stdlib.h>
int insrt, del;
int f=-1, r=-1, opr;

int que[5];

void insert(){
    if(r==4){
     printf("overflow\n");
    }else if(r==-1 && f==-1){
        r=f=1;
        que[r]=insrt;
    }else{
        r++;
        que[r]=insrt;
    }
}

void delete(){
    if(f==-1 && r==-1){
        printf("underflow\n");
    }else if(f==r){
        del=que[r];
        r=f=-1;
        printf("%d is deleted.\n", del);
    }else{
        del = que[f];
        f++;
        printf("%d is deleted", del);
    }
}
 void display (){
    if(r==-1 && f==-1){
        printf("khali\n");
    }else{
        printf("queu ye h:\n");
        for(int i =f; i<=r;i++){
            printf("|%d|", que[i]);
        }
        printf("\n");
    }
 }

int main(){

    while(1){
        printf("1,2,3 ya 4 dalo:");
        scanf("%d", &opr);
        switch(opr){
            case 1:
            printf("value dalo:");
            scanf("%d", &insrt);
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4: 
            printf("khatam\n");
            exit(0);
            break;
        }
    }
    return 0;
}