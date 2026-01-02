#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int k=2*n-1;
    int a=n;
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            cout << '*' << " ";
        }
        cout << "\n";

        if(i<a-1){
            n--;
        }
        else{
            n++;
        }
    }
    return 0;
}