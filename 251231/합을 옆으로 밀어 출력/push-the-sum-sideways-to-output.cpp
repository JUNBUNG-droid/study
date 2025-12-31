#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sum+=a;
    }
    string str=to_string(sum); 
    cout << str.substr(1,str.length()-1)+str.substr(0,1);
    return 0;
}