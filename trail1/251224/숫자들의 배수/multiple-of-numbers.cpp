#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100], n, cnt=0;
    cin >> n;
    for(int i=0; i<100; i++){
        arr[i]=n*(i+1);
        cout << arr[i] << " ";
        if(arr[i]%5==0){
            cnt++;
        }
        if(cnt==2){
            break;
        }
    }
    return 0;
}