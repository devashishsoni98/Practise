# include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target";
    cin>>target;
  
    int i=0;
    int j=n-1;
    vector<int>res;
    while(i<=j){
        if(arr[i]+arr[j]==target){
            res.push_back(i);
            res.push_back(j);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }

    cout<<"index are :"
    for(int i=0;i<res.size();i++){
        cout<<res[i];
   }

return 0;

}
