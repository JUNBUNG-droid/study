#include <iostream>

using namespace std;

int n;

void bin(int n){
    string a = "";
    while(true){
        if(n<2){
            a+=to_string(n);
            break;
        }
        a+=to_string(n%2);
        n/=2;
    }
    for(int i=a.length()-1; i>=0; i--){
        cout << a[i];
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    bin(n);

    return 0;
}