#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;
    int a=n;
    for(int i=1; i<=a; i++){
        n/=i;
        cnt++;
        if(n<=1){
            break;
        }
    }
    cout << cnt;
    return 0;
}