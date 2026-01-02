#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<2*n-1; i++){
        if(i<n){
            for(int k=0; k<i; k++){
                cout << "  ";
            }
            for(int j=0; j<2*(n-i)-1; j++){
                cout << "* ";
            }
        }
        else{
            for(int k=0; k<2*n-2-i; k++){
                cout << "  ";
            }
            for(int j=0; j<2*(i-n)+3; j++){
                cout << "* ";
            }          
        }
        cout << "\n";
    }
    return 0;
}