#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0;
    cin >> n;
    for(int i=n; i<=100; i++){
        total+=i;
    }
    cout << total;
    return 0;
}