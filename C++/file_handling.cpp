#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int data;
    cout<<"enter data:"<<endl;
    cin>>data;

    ofstream outfile;
    outfile.open("text.txt", ios::app);
    outfile<<data<<endl;
    outfile.close();

    ifstream infile;
    infile.open("text.txt");
    while (infile>>data)
    cout<<"data is "<<data<<endl;
    infile.close();
}