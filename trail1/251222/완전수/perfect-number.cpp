#include <iostream>

using namespace std;

int st, ed, cnt=0;

int main() {
    cin >> st >> ed;
    for(int i=st; i<=ed; i++){
        int total=0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                total+=j;
            }
        }
        if(total==i){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
