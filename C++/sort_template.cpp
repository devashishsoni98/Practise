// #include<iostream>
// using namespace std;

// int i,j;
// template <class T>
// void sort (T arr[], int size){
//     for(i=0;i<size;i++){
//         for(j=i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 T temp;
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }

// int main (){
//     int s;
//     cout<<"Enter size of array:"<<endl;
//     cin>>s;

//     int int_arr[s];
//     float float_arr[s];    

//     cout<<"enter integer array:"<<endl;
//     for(i=0;i<s;i++){
//         cin>>int_arr[i];
//     }
//     cout<<"enter float array:"<<endl;
//     for(i=0;i<s;i++){
//         cin>>float_arr[i];
//     }

//     sort(int_arr, s);
//     sort(float_arr, s);

//     cout<<"Sorted Integer array is:"<<endl;
//     for(i=0;i<s;i++){
//         cout<<int_arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Sorted Float array is:"<<endl;
//     for(i=0;i<s;i++){
//         cout<<float_arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int i,j;
template <class T>
void sort(T arr[], int size){
    for (i=0;i<size;i++){
        for (j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                T temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int s=4;
    // cout<<"size:"<<endl;
    // cin>>s;
    int arra[s]={67, 12, 9, 88};
    float arry[s]={8.74, 5.73, 10.23, 1.244};
    char array[s]={'R', 'D', 'Q', 'A'};

    sort(arra, s);
    sort(arry, s);
    sort(array, s);

    cout<<"Sorted int array:"<<endl;
    for(i=0;i<s;i++){
        cout<<arra[i]<<", ";
    }
    cout<<endl;
    cout<<"Sorted float array:"<<endl;
    for(i=0;i<s;i++){
        cout<<arry[i]<<", ";
    }
    cout<<endl;
    cout<<"Sorted char array:"<<endl;
    for(i=0;i<s;i++){ 
        cout<<array[i]<<", ";
    }
    cout<<endl;

}

