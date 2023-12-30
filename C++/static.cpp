#include <iostream>
using namespace std;

class counter
{
    static int count;

public:
    counter()
    {
        count++;
    }
    void display()
    {
        cout << "objects are:" << count << endl;
    }
};
int counter::count=0;
int main(){
    counter one, two, three;
    three.display();
}