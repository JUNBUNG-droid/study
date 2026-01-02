#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100],n=0,sum=0;
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        n++;
    }
    for(int i=n-1; i>n-4; i--){
        sum+=arr[i];
    }
    cout << sum;
    return 0;
}