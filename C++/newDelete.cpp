#include<iostream>
#include<string>
using namespace std;


int main(){
int i,s=3;
int *arr=new int[s];
for(i=0; i<s;i++){
    arr[i]=i+1;
}
string *sarr=new string[s];
for(i=0; i<s;i++){
    sarr[i]="element "+to_string(i+1);
}
cout<<"int array:"<<endl;
for(i=0;i<s;i++){
    cout<<arr[i]<<" "<<endl;
}
cout<<"string array:"<<endl;
for(i=0;i<s;i++){
    cout<<sarr[i]<<" "<<endl;
}
delete[]arr;
delete[]sarr;
}