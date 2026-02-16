#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int max_n=0, ans;
    for(int i=X; i<=Y; i++){
        int a=i/10;
        int b=i%10;
        ans=a+b;
        if(max_n<ans) max_n=ans;
    }
    cout << max_n;

    return 0;
}