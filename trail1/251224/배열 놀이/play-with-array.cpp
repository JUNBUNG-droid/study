#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, q, arr[100]={};
    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<q; i++){
        int a, b, c;
        cin >> a;
        if(a==1){
            cin >> b;
            cout << arr[b-1] << "\n";
        }
        else if(a==2){
            cin >> b;
            bool idx = false;
            for(int j=0; j<n; j++){
                if(arr[j]==b){
                    idx=true;
                    cout << j+1 << "\n";
                    break;
                }
            }
            if(idx==false){
                cout << 0 << "\n";
            }
        }
        else if(a==3){
            cin >> b >> c;
            for(int i=b-1; i<c; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}