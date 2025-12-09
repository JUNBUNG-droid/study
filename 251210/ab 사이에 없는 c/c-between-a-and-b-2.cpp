#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    bool d=true;
    cin >> a >> b >> c;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            d=false;
        }
    }
    if(d){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}