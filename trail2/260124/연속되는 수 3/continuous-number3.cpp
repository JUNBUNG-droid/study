#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0, ans=1;
    for (int i = 0; i < N; i++) {
        if(i==0||arr[i]*arr[i-1]>0){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans = max(cnt,ans);
    }
    cout << ans;
    return 0;
}