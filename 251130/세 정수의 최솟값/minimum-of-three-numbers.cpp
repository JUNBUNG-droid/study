#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    int low = a;
    if (b<low){
        low = b;
    }
    if (c<low){
        low = c;
    }
    cout << low;
    return 0;
}