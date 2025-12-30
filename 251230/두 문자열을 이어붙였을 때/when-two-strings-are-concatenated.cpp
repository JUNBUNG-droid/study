#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin >> a >> b;
    if(a+b==b+a){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}