#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string str="";
    string a;
    for(int i=0; i<n; i++){
        cin >> a;
        str+=a; 
    }
    cout << str;
    return 0;
}