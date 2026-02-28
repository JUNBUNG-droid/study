#include <iostream>

using namespace std;

string N;

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
    cin >> N;
    int n=1,num=0;
    // Please write your code here.
    for(int i=N.length()-1; i>=0; i--){
        int a=(N[i]-'0')*n;
        num+=a;
        n*=2;
    }
    num*=17;
    bin(num);

    return 0;
}