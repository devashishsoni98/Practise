#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"virtual display"<<endl;
    }
};

class derived:public base{
    public:
    void display(){
        cout<<"Base displau"<<endl;
    }
};

int main () {
    base *p;
    derived obj;
    p=&obj;
    p->display();
  
}