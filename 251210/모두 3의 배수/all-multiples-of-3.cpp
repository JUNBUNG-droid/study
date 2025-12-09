#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool b=true;
    for(int i=0; i<5; i++){
        int a;
        cin >> a;
        if(a%3!=0){
            b=false;
        }
    }
    cout << b;
    return 0;
}