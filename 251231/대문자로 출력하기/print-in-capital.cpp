#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]>='A'&&str[i]<='Z'){
            cout << str[i];
        }
        else if(str[i]>='a'&&str[i]<='z'){
            cout << (char)toupper(str[i]);
        }
    }
    return 0;
}