#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={}, cnt=0;
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==999||arr[i]==-999){
            break;
        }
        cnt++;
    }
    int max=arr[0];
    for(int i=1; i<cnt; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    } 
    int min=arr[0];
    for(int i=1; i<cnt; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}