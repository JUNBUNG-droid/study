#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b;
    cin >> a >> b;
    if(a>b){
        cout << a+b << " " << a-b;
    }
    else{
        cout << a+b << " " << b-a;
    }
    return 0;
}