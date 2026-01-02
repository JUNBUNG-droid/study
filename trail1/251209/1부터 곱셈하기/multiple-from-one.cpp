#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=1,i;
    cin >> n;
    for(i=1; i<=10; i++){
        a*=i;
        if(a>=n){
            break;
        }
    }
    cout << i;
    return 0;
}