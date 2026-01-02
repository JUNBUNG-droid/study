#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[10][10];
    cin >> n;
    int num=1;
    if(n%2!=0){
        for(int i=n-1; i>=0; i--){
            if(i%2==0){
                for(int j=n-1; j>=0; j--){
                    arr[j][i]=num;
                    num++;
                }
            }
            else{
                for(int j=0; j<n; j++){
                    arr[j][i]=num;
                    num++;
                }
            }        
        }
    }
    else{
        for(int i=n-1; i>=0; i--){
            if(i%2==0){
                for(int j=0; j<n; j++){
                    arr[j][i]=num;
                    num++;
                }
            }
            else{
                for(int j=n-1; j>=0; j--){
                    arr[j][i]=num;
                    num++;
                }
            }        
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