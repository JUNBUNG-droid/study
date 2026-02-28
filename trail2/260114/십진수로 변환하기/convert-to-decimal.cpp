#include <iostream>

using namespace std;

int main() {
    string binary;
    cin >> binary;
    int a=1;
    int num=0;
    // Please write your code here.
    for(int i=binary.length()-1; i>=0; i--){
        num+=(binary[i]-'0')*a;
        a*=2;
    }
    cout << num;
    return 0;
}