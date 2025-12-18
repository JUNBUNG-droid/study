#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<2*n; i+=2){
        for(int j=1; j<2*n; j+=2){
            cout << 9+i+j << " ";
        }
        cout << "\n";
    }
    return 0;
}