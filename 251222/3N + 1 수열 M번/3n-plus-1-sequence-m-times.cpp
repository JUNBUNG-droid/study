#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int n, cnt=0;
        cin >> n;
        while(n>1){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n*=3;
                n+=1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}