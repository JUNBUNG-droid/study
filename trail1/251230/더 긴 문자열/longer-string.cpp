#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin >> a >> b;
    if(a.length()>b.length()){
        cout << a << " " << a.length();
    }
    else if(b.length()>a.length()){
        cout << b << " " << b.length();
    }
    else{
        cout << "same";
    }
    return 0;
}