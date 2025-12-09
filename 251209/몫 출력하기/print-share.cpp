#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int b=0;
    while(b<3){
        int a;
        cin >> a;
        if(a%2==0){
            a/=2;
            cout << a << "\n";
            b++;
        }
    }
    return 0;
}