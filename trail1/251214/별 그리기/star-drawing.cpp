#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<2*n-1; i++){
        if(i<n){
            for(int k=0; k<n-i-1; k++){
                cout << " ";
            }
            for(int j=0; j<2*i+1; j++){
                cout << "*";
            }
        }
        else{
            for(int k=0; k<i-n+1; k++){
                cout << " ";
            }
            for(int j=0; j<2*(n-i)+2*(n-1)-1; j++){
                cout << "*";
            }          
        }
        cout << "\n";
    }
    return 0;
}
