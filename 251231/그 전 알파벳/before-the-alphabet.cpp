#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;
    if(a=='a'){
        cout << 'z';
    }
    else{
        cout << char(a-1);
    }
    return 0;
}