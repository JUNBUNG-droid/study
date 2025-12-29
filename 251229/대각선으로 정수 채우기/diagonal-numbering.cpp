#include <iostream>

using namespace std;

int n, m, num=1;

int main() {
    cin >> n >> m;
    int arr[100][100];
    // Please write your code here.
    int a=1, b=0, d=0;
    for(int i=0; i<n+m-1; i++){
        int c=b;
        for(int j=d; j<a; j++){
            arr[j][c]=num;
            num++;
            c--;
        }
        if(b>=m-1){
            b=m-1;
            if(n>m){
                d++;
                a++;
            }
            else{
                d++;
            }
        }
        else{
            b++;
            if(a>=n){
                a=n;
            }
            else{
                a++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
