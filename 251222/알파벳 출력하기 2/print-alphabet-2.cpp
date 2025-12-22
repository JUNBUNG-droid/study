#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 65;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j<n-i; j++){
            if(cnt>90){
                cnt = 65;
            }
            cout << (char)cnt << " ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}