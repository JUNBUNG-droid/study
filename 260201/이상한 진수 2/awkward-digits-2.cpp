#include <iostream>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    bool find = false;
    for(int i=0; i<a.length(); i++){
        if(a[i]=='0'){
            a[i]='1';
            find=true;
            break;
        }
    }
    if(!find) a[a.length()-1]='0';  

    int num=0;
    int b=1;
    for(int i=a.length()-1; i>=0; i--){
        num+=(a[i]-'0')*b;
        b*=2;
    }
    cout << num;
    return 0;
}