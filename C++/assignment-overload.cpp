// #include<iostream>
// using namespace std;

// class Sample{
//     int a;
//     int b; 
//     public:
//     Sample(){

//     }
//     Sample(int x, int y){
//         a=x;
//         b=y;
//     }
//     void print(){
//         cout<<a<<endl<<b<<endl;
//     }
//     void operator =(Sample &m){
//         a=m.a;
//         b=m.b;
//     }
// };

// int main () {
//     Sample one(2,3);
//     one.print();
//     Sample two ;
//     two = one;
//     two.print();
    
// }


#include<iostream>
using namespace std;

class Sample{
    int a, b;
    public:

    Sample(){

    }

    Sample(int x, int y): a(x), b(y){}

    void print(){
        cout<<a<<endl<<b<<endl;
    }

     void operator = (Sample &v){
        a=v.a;
        b=v.b;
     }
};

int main(){
    Sample one(2,3), two;
    two = one;
    two.print();
    
}

