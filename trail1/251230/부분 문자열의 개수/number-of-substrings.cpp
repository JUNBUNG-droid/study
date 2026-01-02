#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin >> a >> b;
    int cnt=0;
    int len1=a.length();
    int len2=b.length();
    for(int i=0; i<len1; i++){
        if(i+len2-1>len1-1){
            continue;
        }
        bool is_match=true;
        for(int j=0; j<len2; j++){
            if(a[i+j]!=b[j]){
                is_match=false;
            }
        }
        if(is_match){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}