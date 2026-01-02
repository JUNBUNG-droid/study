#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    int c=a;
    for(int i=1; i<b; i++){
        c*=a;
    }
    if (b==0){
        cout << 1;
    }
    else{
        cout << c;
    }
    return 0;
}