#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    if(a<11||a<=11&&b<11||a<=11&&b<=11&&c<11){
        cout << -1;
    }
    int case1=1440*11+60*11+11;
    int case2=1440*a+60*b+c;
    cout << case2-case1;
    return 0;
}