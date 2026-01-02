#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=1;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout << cnt << " ";
                cnt++;
            }
        }
        else{
            cnt--;
            for(int j=0; j<n; j++){
                cnt+=2;
                cout << cnt << " ";
            }
            cnt++;            
        }
        cout << "\n";
    }
    return 0;
}