#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int array1[n][m];
    int array2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> array1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> array2[i][j];
        }
    }  
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array1[i][j]==array2[i][j]){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }   
    return 0;
}