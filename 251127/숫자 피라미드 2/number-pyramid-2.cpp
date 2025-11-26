#include <iostream>
using namespace std;

int main() {
    int n,a=0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            a++;
            cout << a << " ";
        }
        cout << "\n";
    }
    return 0;
}