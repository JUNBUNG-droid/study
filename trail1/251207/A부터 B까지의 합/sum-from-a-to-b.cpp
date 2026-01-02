#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,total=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        total+=i;
    }
    cout << total;
    return 0;
}