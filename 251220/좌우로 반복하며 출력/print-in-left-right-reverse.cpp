#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout << j+1;
            }
        }
        else{
            for(int j=0; j<n; j++){
                cout << n-j;
            }            
        }
        cout << "\n";
    }
    return 0;
}