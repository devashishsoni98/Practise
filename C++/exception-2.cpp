#include <iostream>
using namespace std;



int main() {
    int n;
    char a;
 cout<<"enter speed in km/hr"<<endl;
    try{
        cin>> n;
        if(n>100){
            throw a;
        }else{
            cout<<"okay"<<endl;
        }
    }
    catch (char y){
        cout<<"not above 100 please!!"<<endl;
    }
    return 0;
}