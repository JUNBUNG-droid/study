#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,i=1;
    cin >> n >> a;
    while(i<=n){
        if(i%a==0){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
        i++;
    }
    return 0;
}