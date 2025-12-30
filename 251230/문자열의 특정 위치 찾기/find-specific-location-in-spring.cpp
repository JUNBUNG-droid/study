#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char a;
    cin >> str;
    cin >> a;
    if(str.find(a)!= string::npos){
        cout << str.find(a);
    }
    else{
        cout << "No";
    }
    return 0;
}