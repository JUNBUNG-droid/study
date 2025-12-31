#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]>='a'&&str[i]<='z'||isdigit(str[i])){
            cout << str[i];
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            cout << (char)tolower(str[i]);
        }
    }
    return 0;
}