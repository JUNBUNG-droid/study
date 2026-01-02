#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true){
        int a;
        cin >> a;
        if(a>25){
            cout << "Lower" << "\n";
        }
        else if(a<25){
            cout << "Higher" << "\n";
        }
        else{
            cout << "Good";
            break;
        }
    }
    return 0;
}