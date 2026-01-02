#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0;
    cin >> n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            total+=i;
        }
    }

    if(total==n){
        cout << 'P';
    }
    else{
        cout << 'N';
    }
    return 0;
}