#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    string a="";
    for(int i=0; i<str.length(); i++){
        if(i%2!=0){
            a+=str[i];
        }
    }
    for(int i=a.length()-1; i>=0; i--){
        cout << a[i];
    }
    return 0;
}