#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string arr[200]={};
    int cnt=0;
    int idx=0;
    while(true){
        cin >> a;
        if(a.length()==1){
            if(a[0]=='0'){
                cout << cnt;
                cout << '\n';
                break;
            }
        }
        if(cnt%2==0){
            arr[idx]=a;
            idx++;
        }
        cnt++;
    }
    for(int i=0; i<idx+1; i++){
        cout << arr[i];
        cout << '\n';
    }
    return 0;
}