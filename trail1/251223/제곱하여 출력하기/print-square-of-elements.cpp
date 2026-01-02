#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=arr[i]*arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}