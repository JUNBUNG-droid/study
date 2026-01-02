#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10], cnt=0, sum=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==0){
            sum+=arr[i];
            cnt++;
        }
    }
    cout << cnt << " " << sum;
    return 0;
}