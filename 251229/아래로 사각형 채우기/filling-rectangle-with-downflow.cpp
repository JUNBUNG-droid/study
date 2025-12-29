#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,num=1;
    int arr[10][10];
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[j][i]=num;
            num++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}