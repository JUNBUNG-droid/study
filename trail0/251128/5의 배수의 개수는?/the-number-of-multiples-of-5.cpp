#include <iostream>
using namespace std;

int main() {
    int array[4][4];
    int cnt=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> array[i][j];
            if(array[i][j]%5==0){
                cnt+=1;
            }
        }
    }
    cout << cnt;
    return 0;
}