#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            bool istrue = false;
            int sum=0;
            int cnt=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
                cnt++;
            }
            int avg=sum/cnt;
            for(int k=i; k<=j; k++){
                if(avg==arr[k]) istrue=true;
            }
            if(istrue) ans++;
        }
    }
    cout << ans;
    return 0;
}