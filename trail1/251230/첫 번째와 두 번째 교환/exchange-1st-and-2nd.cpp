#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    char a=str[0];
    char b=str[1];
    for(int i=0; i<str.length(); i++){
        if(str[i]==a){
            str[i]=b;
        }
        else if(str[i]==b){
            str[i]=a;
        }
    }
    cout << str;
    return 0;
}