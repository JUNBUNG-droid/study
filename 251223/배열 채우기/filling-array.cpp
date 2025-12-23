#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10], cnt=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        cnt++;
        if(arr[i]==0){
            break;
        }
    }
    for(int i=cnt-1; i>=0; i--){
        if(arr[i]==0){
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}