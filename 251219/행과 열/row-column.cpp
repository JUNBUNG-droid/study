#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            cout << i*j << " ";
        }
        cout << "\n";
    }
    return 0;
}