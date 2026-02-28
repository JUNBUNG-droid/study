#include <iostream>

using namespace std;

int n;
int a[10], b[10], c[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
    } 
    // Please write your code here.
    int ans=0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                int cnt=0;
                for(int l=0; l<n; l++){

                    if(i==j||j==k||i==k) continue;
                    int strike=0, ball=0;
                    int x = a[l] / 100;
                    int y = (a[l] / 10) % 10;
                    int z = a[l] % 10;

                    if(i == x) strike++;
                    else if(i == y || i == z) ball++;

                    if(j == y) strike++;
                    else if(j == x || j == z) ball++;

                    if(k == z) strike++;
                    else if(k == x || k == y) ball++;

                    if(strike==b[l]&&ball==c[l]) cnt++;

                }
            if(cnt==n) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}