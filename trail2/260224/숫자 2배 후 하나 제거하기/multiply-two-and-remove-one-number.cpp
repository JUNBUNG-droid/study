#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val=INT_MAX;
    // *2 숫자 정하기
    for(int i=0; i<n; i++){
        arr[i]*=2;
        // 숫자 하나 제외
        for(int j=0; j<n; j++){
            int current[n-1]={}, idx=0;
            for(int k=0; k<n; k++){
                if(j==k) continue;
                current[idx++] = arr[k];
            }

            int diff_sum=0;
            for(int k=0; k<n-2; k++){
                diff_sum+=abs(current[k]-current[k+1]);
            }

            if(min_val>diff_sum) min_val = diff_sum;
        }
        arr[i]/=2;
    }

    cout << min_val;

    return 0;
}