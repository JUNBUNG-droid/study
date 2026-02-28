#include <iostream>

using namespace std;

int N, B;

void a(int n, int b){
    string a = "";
    while(true){
        if(n<b){
            a+=to_string(n);
            break;
        }
        a+=to_string(n%b);
        n/=b;
    }
    for(int i=a.length()-1; i>=0; i--){
        cout << a[i];
    }
}

int main() {
    cin >> N >> B;

    // Please write your code here.
    a(N,B);

    return 0;
}