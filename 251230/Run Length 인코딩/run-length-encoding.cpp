#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int len=A.length();
    int cnt=0;
    string str="";
    for(int i=0; i<len; i++){
        cnt++;
        if(A[i]!=A[i+1]){
            str=str+A[i]+to_string(cnt);
            cnt=0;
        }
    }
    cout << str.length() << "\n";
    cout << str;

    return 0;
}
