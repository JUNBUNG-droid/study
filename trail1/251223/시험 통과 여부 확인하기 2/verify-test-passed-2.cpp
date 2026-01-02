#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int arr[4], sum=0;
        for(int j=0; j<4; j++){
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum>=240){
            cout << "pass" << "\n";
            cnt++;
        }
        else{
            cout << "fail" << "\n";
        }
    }
    cout << cnt;
    return 0;
}