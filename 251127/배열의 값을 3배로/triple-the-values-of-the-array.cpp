#include <iostream>
using namespace std;

int main() {
    int array[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> array[i][j];
            array[i][j]=array[i][j]*3;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}