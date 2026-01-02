#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;
    while(true){
        if(n==1){
            break;
        }
        if(n%2==0){
            n/=2;
            cnt++;
        }
        else{
            n*=3;
            n+=1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}