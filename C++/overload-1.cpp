// #include<iostream>
// using namespace std;

// class Complex{
//  double real;
//  double imag;
//  public:
//   Complex(double r, double i){
//     real=r;
//     imag=i;
//   }
//   void print(){
//     cout<<real<<" + "<<imag<<"i"<<endl;
//   }
//   friend Complex operator - (const Complex &c1, const Complex &c2){
//     return Complex(c1.real-c2.real, c1.imag-c2.imag);
//   }
// };

// int main (){
//     Complex one(2.2,3.3);
//     one.print();
//     Complex two(2.1,3.1);
//     two.print();
//     Complex three= one -  two;
//     three.print();

// }




#include<iostream>
using namespace std;

class Complex{
double real , imag;
public:
Complex(double r=0, double i=0): real(r), imag(i) {}

void print(){
    cout<<real<<" + "<<imag<<"i"<<endl;
}

 Complex operator + ( const Complex &Y){
    return Complex(real+Y.real, imag+Y.imag);
}
};

int main(){
    Complex one(2.2,7.1);
    Complex two(2.8,1.1);
    Complex three=one+two;
    three.print();
}

