#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=0,i;
    cin >> n;
    for(i=1; i<=100; i++){
        a+=i;
        if(a>=n){
            break;
        }
    }
    cout << i;
    return 0;
}