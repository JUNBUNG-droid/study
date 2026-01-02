#include <iostream>
using namespace std;

int main() {
    int array[10]={};
    int cnt1=0, cnt2=0;
    for(int i=0; i<10; i++){
        cin >> array[i];
    }
    for(int i=0; i<10; i++){
        if(array[i]%3==0){
            cnt1++;
        }
        if(array[i]%5==0){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}