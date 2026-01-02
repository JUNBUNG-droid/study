#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a[10];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int b=a[1]-a[0];
    for(int i=1; i<n-1; i++){
        if(a[i+1]-a[i]<b){
            b=a[i+1]-a[i];
        }
    }
    cout << b;
    return 0;
}