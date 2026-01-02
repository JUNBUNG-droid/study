#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0,a=1;
    cin >> n;
    while(true){
        if(n==a){
            break;
        }
        a*=2;
        cnt++;
    }
    cout << cnt;
    return 0;
}