#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

int main() {
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    // Please write your code here.
    int cnt=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) continue;
            bool correct=true;
            for(int l=0; l<k; l++){
                int idx1=0, idx2=0;
                for(int m=0; m<n; m++){
                    if(arr[l][m]==i) idx1=m;
                    if(arr[l][m]==j) idx2=m;
                }
                if(idx1>idx2) correct=false;
            }
            if(correct) cnt++; 
        }
    }
    cout << cnt;
    return 0;
}