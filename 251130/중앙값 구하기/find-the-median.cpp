#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b && a<c || a>c && a<b){
        cout << a;
    }
    else if(b>a && b<c || b>c && b<a){
        cout << b;
    }
    else if(c>a && c<b || c>b && c<a){
        cout << c;
    }
    return 0;
}