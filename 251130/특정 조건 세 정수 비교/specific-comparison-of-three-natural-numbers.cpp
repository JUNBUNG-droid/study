#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    int low;
    if (a>=b && b>=c){
        low = c;
    }
    else if(b>=c && c>=a){
        low = a;
    }
    else{
        low = b;
    }
    cout << (a==low) << " ";
    cout << (a==b && b==c);
    return 0;
}