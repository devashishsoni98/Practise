#include <iostream>
using namespace std;

class first {
private:
public:
    virtual void display()=0;
};
 class second:public first{
    public:
    void display(){
        cout<<"Hello 1"<<endl;
    }
 };
 class third:public second{
public:
void display(){
    cout<<"hello";
}
 };


int main() {
    second ob;
    ob.display();
    third obj;
    obj.display();
    return 0;
}