#include <iostream>

using namespace std;

int n;
int arr[50];

void a(int *b){
    for(int i=0; i<n; i++){
        if(b[i]%2==0){
            b[i]/=2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    a(arr);
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   

    return 0;
}