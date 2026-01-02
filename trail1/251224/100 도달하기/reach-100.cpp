#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100], n, j=0;
    cin >> n;
    arr[0]=1;
    arr[1]=n;
    for(int i=2; i<100; i++){
        arr[i]=arr[i-1]+arr[i-2];
        j++;
        if(arr[i]>100){
            break;
        }
    }
    for(int i=0; i<j+2; i++){
        cout << arr[i] << " ";
    }
    return 0;
}