#include <iostream>

using namespace std;

int n;
int arr[50];

void abs(int arr[]){
    for (int i = 0; i < n; i++) {
        if(arr[i]<0){
            arr[i]=-arr[i];
        }
    }    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    abs(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}