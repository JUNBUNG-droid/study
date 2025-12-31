#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int sum=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='0'&&str[i]<='9'){
            sum+=str[i]-'0';
        }
    }
    cout << sum;
    return 0;
}