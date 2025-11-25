#include <iostream>
using namespace std;

int main() {
    int a;
    while(true){
        cin >> a;
        if(a==25){
            cout << "Good" << "\n";
            break;
        }
        else if (a>25){
            cout << "Lower" << "\n";
        }
        else{
            cout << "Higher" << "\n";
        }
    }
    return 0;
}