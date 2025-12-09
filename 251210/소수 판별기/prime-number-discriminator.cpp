#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool a=true;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=false;
        }
    }
    if(a){
        cout << 'P';
    }
    else{
        cout << 'C';
    }
    return 0;
}