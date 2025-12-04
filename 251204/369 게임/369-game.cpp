#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if((i%10==3) || (i%10==6) || (i%10==9) || (i%3==0)){
            cout << 0 << " ";
        }
        else if((i>=30&&i<40)|| (i>=60&&i<70) || (i>=90&&i<100)){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}