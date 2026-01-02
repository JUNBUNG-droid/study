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
            cnt+=n-1;
            for(int j=0; j<n; j++){
                cout << cnt << " ";
                cnt--;
            }         
            cnt+=n+1;   
        }
        cout << "\n";
    }
    return 0;
}