#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char helper) {
    if(n==1)
    cout<<"steps is "<<n<<endl;
    else{
     towerOfHanoi(n-1,source,helper,destination);
     cout<<"moving from s to h"<<endl;
     towerOfHanoi(n-1,helper,destination,source);
     cout<<"moving from helper to destination"<<endl;
    }
}

int main() {
    int n;
    cin >> n;
 towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
