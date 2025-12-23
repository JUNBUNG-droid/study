#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4]={};
    for(int i=0; i<3; i++){
        char a;
        int b;
        cin >> a >> b;
        if(a=='Y'&&b>=37){
            arr[0]++;
        }
        else if(a=='N'&&b>=37){
            arr[1]++;
        }
        else if(a=='Y'){
            arr[2]++;
        }
        else{
            arr[3]++;
        }
    }
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
    if(arr[0]>=2){
        cout << 'E';
    }
    return 0;
}