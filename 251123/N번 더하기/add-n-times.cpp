#include <iostream>
using namespace std;

int main() {
    int a;
    int n;
    cin >> a >> n;
    int i;
    for (i=0; i<n; i++){
        a+=n;
        cout << a << "\n";
    }
    return 0;
}