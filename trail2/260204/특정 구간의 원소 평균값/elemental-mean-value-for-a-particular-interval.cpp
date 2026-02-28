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
        for(int j=i; j<n; j++){
            bool istrue = false;
            double sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            double avg=sum/(j-i+1);
            for(int k=i; k<=j; k++){
                if(avg==arr[k]) istrue=true;
            }
            if(istrue) ans++;
        }
    }
    cout << ans;
    return 0;
}