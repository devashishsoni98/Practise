//Binary search implementation

#include<stdio.h>

int binarysearch(int arr[], int l, int r, int x){
    while (l<=r){
        int m = l+(r-l)/2;
        if (arr[m]==x)
            return m;
        if (arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return -1;
}

int main (){
    int arr[]={2,3,4,10,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the element to search:\n");
    scanf("%d", &x);
    int result = binarysearch(arr, 0, n-1, x);
    if (result == -1){
        printf("Element not found.\n");
    }else{
        printf("Element found at %d", result);
    }
    return 0;
}
