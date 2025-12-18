#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0||j==n-1||j<i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}