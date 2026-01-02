#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    bool c=false;
    for(int i=a; i<=b; i++){
        if(1920%i==0&&2880%i==0){
            c=true;
        }
    }
    cout << c;
    return 0;
}