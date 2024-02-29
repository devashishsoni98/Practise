#include<stdio.h>

int main(){
    int sparse[3][3]={
        {0,2,0},
        {0,0,1},
        {9,0,1}
    };
    int size=0;

    for(int i =0; i<3;i++){
        for(int j=0; j<3;j++){
            if(sparse[i][j]!=0)
             size++;
        }
    }

    int compact[3][size];

    int k=0;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            if(sparse[i][j]!=0){
                compact[0][k]=i;
                compact[1][k]=j;
                compact[2][k]=sparse[i][j];
                k++;
            }
        }
    }

    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<size;j++){
            printf(" %d", compact[i][j]);
        }
    }
    return 0;
   
}