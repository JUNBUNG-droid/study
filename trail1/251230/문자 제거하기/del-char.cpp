#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    while(str.length()>1){
        int n;
        cin >> n;
        if(n>str.length()-1){
            n=str.length()-1;
        }
        str.erase(n,1);
        cout << str << "\n";
    }
    return 0;
}