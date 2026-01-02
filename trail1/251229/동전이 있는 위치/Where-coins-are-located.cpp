#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    int arr[9][9]={};
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        for(int j=0; j<1; j++){
            cin >> a >> b;
        }
        arr[a-1][b-1]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}