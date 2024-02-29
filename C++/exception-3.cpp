#include<iostream>
using namespace std;

int main(){
    cout<<"Enter speed:"<<endl;
    int n;
    try
    {
        cin>>n;
        while(n<100){
            n=n+10;
            cout<<n<<endl;
        }
        throw 10;
    }
    catch(int x)
    {
        cerr<<"Speed too high"<<endl;
    }
    
}