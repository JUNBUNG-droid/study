#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int cnt=0;
    for(int i=0; i<A.length(); i++){
        if(A[i]=='('&&A[i+1]=='('){
            for(int j=i+2; j<A.length(); j++){
                if(A[j]==')'&&A[j+1]==')') cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}