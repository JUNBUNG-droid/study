#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool a=false;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=true;
        }
    }
    if(a){
        cout << 'C';
    }
    else{
        cout << 'N';
    }
    return 0;
}