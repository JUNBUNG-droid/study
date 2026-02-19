#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int ans=0;
    for(int i=0; i<=100; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            for(int k=j+1; k<n; k++){
                if((double)i==(double)(a[j]+a[k])/2) cnt++;
            }
        }
        if(ans<cnt) ans=cnt;
    }
    cout << ans;
    return 0;
}