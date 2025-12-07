#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a%2!=0&&a%3==0){
            total += a;
        }
    }
    cout << total;
    return 0;
}