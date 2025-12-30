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
    for(int i=0; i<len-1; i++){
        if(A[i]==A[i+1]){
            cnt++;
        }
        else{
            str=str+A[i]+to_string(cnt+1);
            cnt=0;
        }
    }
    cout << str.length()+2 << "\n";
    cout << str << A[len-1] << cnt+1;

    return 0;
}
