#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    string a;
    cin >> n >> a;
    for(int i=0; i<n; i++){
        string b;
        cin >> b;
        if(a==b){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}