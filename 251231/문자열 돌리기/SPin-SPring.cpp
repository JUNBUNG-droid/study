#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    cout << str << "\n";
    int len=str.length();
    for(int i=0; i<len; i++){
        str=str.substr(len-1,1)+str.substr(0,len-1);
        cout << str << "\n";
    }
    return 0;
}