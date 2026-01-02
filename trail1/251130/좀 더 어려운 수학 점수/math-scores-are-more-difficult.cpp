#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>c){
        cout << 'A';
    } 
    else if (a<c){
        cout << 'B';
    }
    else{
        if(b>d){
            cout << 'A';
        }
        else if(b<d){
            cout << 'B';
        }
    }
    return 0;
}