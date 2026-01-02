#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin >> a >> b;
    string c,d;
    for(int i=0; i<a.length(); i++){
        if(a[i]<'0'||a[i]>'9'){
            continue;
        }
        else{
            c+=a[i];
        }
    }
    for(int i=0; i<b.length(); i++){
        if(b[i]<'0'||b[i]>'9'){
            continue;
        }
        else{
            d+=b[i];
        }        
    }
    cout << stoi(c)+stoi(d);
    return 0;
}