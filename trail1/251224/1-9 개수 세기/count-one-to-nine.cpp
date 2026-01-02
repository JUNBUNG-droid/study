#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={}, n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    for(int i=1; i<10; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}