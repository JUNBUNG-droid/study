#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string str;
    string a="";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        a+=str;
    }
    for(int i=0; i<a.length(); i++){
        cout << a[i];
        if((i+1)%5==0){
            cout << "\n";
        }
    }    
    return 0;
}