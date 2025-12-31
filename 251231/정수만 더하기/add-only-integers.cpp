#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int sum=0;
    for(int i=0; i<str.length(); i++){
        if((int)str[i]>=0&&(int)str[i]<=9){
            sum+=str[i];
        }
    }
    cout << sum;
    return 0;
}