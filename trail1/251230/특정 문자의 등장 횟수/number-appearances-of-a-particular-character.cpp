#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt1=0, cnt2=0;
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0; i<len-1; i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            cnt1++;
        }
        if(str[i]=='e'&&str[i+1]=='b'){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}