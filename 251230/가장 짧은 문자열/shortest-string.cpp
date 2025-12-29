#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b, c;
    cin >> a >> b >> c;
    if(a.length()>b.length()&&b.length()>c.length()){
        cout << a.length()-c.length();
    }
    else if(a.length()>c.length()&&c.length()>b.length()){
        cout << a.length()-b.length();
    }
    else if(b.length()>c.length()&&c.length()>a.length()){
        cout << b.length()-a.length();
    }
    else if(b.length()>a.length()&&a.length()>c.length()){
        cout << b.length()-c.length();
    }
    else if(c.length()>a.length()&&a.length()>b.length()){
        cout << c.length()-b.length();
    }
    else{
        cout << c.length()-a.length();
    }
    return 0;
}