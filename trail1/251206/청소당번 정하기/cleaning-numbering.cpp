#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int cnt1=0,cnt2=0,cnt3=0;
    cin >> a;
    for(int i=1; i<=a; i++){
        if(i%12==0){
            cnt3++;
        }
        else if(i%3==0){
            cnt2++;
        }
        else if(i%2==0){
            cnt1++;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    return 0;
}