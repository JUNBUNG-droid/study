#include <iostream>
using namespace std;

int main() {
    int array[4][4];
    int total=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> array[i][j];
            if(i>=j){
                total+=array[i][j];
            }
        }
    }
    cout << total;
    return 0;
}