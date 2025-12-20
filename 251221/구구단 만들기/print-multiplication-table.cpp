#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    for(int i=1; i<=9; i++){
        for(int j=0; j<b; j+=2){
            if(b-j>=a){
                cout << b-j << " * " << i << " = " << (b-j)*i; 
                if(b-j>a){
                    cout << " / ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}