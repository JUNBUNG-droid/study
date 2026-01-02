#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=2;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cnt==10){
                cnt=2;
            }
            cout << cnt << " ";
            cnt+=2;
        }
        cout << "\n";
    }
    return 0;
}