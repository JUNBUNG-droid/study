#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0, ans=1;
    for (int i = 0; i < n; i++) {
        if(arr[i]>t){
            cnt++;
        }
        else{
            cnt=0;
        }
        ans = max(cnt,ans);
    }
    cout << ans;
    return 0;
}