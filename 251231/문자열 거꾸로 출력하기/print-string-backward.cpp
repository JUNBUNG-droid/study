#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    while(true){
        cin >> a;
        if(a=="END"){
            break;
        }
        for(int i=a.length()-1; i>=0; i--){
            cout <<a[i];
        }
        cout << "\n";
    }
    return 0;
}