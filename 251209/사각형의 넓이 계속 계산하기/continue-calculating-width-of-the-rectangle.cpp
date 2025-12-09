#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true){
        int a,b;
        char c;
        cin >> a >> b >> c;
        cout << a*b << "\n";
        if(c=='C'){
            break;
        }
    }
    return 0;
}