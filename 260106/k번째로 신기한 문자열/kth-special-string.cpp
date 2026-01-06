#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
string t;
string str[100];
string a[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Please write your code here.
    int cnt=0;
    for (int i = 0; i < n; i++) {
        bool match = true;
        for(int j=0; j<t.length(); j++){
            if(str[i][j]!=t[j]){
                match = false;
            }
        }
        if(match){
            a[i]=str[i];
            cnt++;
        }
    }
    sort(a,a+cnt);
    cout << a[k-1];    

    return 0;
}