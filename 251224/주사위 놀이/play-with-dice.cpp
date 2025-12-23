#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={};
    for(int i=0; i<10; i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    for(int i=1; i<7; i++){
        cout << i << " - " << arr[i] << "\n"; 
    }
    return 0;
}