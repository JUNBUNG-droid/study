#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        int copy[100];
        copy[i] = arr[i];   
        if(i%2==0){
            sort(copy,copy+i+1);
            cout << copy[i/2] << " ";
        }
    }
    return 0;
}